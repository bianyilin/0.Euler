/*************************************************************************
	> File Name: ol50.c
	> Author: bianyilin
	> Mail: 732406982@qq.com 
	> Created Time: 2019年04月21日 星期日 16时39分49秒
 ************************************************************************/

#include <stdio.h>

int gcd(int a, int b) {
    return (b ? gcd(b, a % b) : a);
}



int main() {

    return 0;
}

