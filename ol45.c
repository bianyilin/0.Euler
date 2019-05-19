/*************************************************************************
	> File Name: ol45.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月21日 星期日 14时40分32秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

int64_t Pentagonal(int n) {
    return n * (3 * n -1) / 2;
}

int64_t Hexagonal(int n) {
    return n * (2 * n - 1);
}

int binary_search(int64_t (*num)(int), int n, int64_t val) {
    int head = 0, tail = n - 1, mid;
    while (head <= tail) {
        mid = (head + tail) >> 1;
        if (num(mid) == val) return mid;
        if (num(mid) < val) head = mid + 1;
        else tail = mid - 1;
        
    }
    return -1;
}

int main() {
    int n = 166;
    while (binary_search(Hexagonal, n, Pentagonal(n)) == -1) ++n;
       printf("%" PRId64 "\n", Pentagonal(n));
    return 0;
}


