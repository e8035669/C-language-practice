#include<stdio.h>

/*
        计浪琩
        块タ俱计тㄤ┮Τ计
 */
int main(int argc, char *argv[]) {

    long long n = 0;
    printf("块计 тㄤ计");
    scanf("%d", &n);
    long long count = 1;

    printf("%lld 计Τ", n);
    while (count <= n) {
        if (!(n % count)) {
            printf("%lld ", count);
        }
        count++;
    }

    return 0;
}