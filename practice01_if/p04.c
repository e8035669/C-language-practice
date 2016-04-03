#include <stdio.h>

/*
        簡易猜數字遊戲： 
        撰寫一猜數字遊戲， 
        當猜的數字比目標大時顯示Too Big !! 
        當猜的數字比目標小時顯示Too Small !! 
        猜中目標顯示You got it !!
        並結束遊戲。
 */


int main(int argc, char *argv[]) {
    int ans = 10;
    int input = 0;
    do {
        printf("?q?@?????r?G");
        scanf("%d", &input);

        if (input > ans) {
            printf("Too Big !!\n");
        } else if (input < ans) {
            printf("Too Small !!\n");
        } else {
            printf("You got it!!\n");
        }

    } while (input != ans);

    return 0;
}
