#include <stdio.h>

/*
        ²���q�Ʀr�C���G 
        ���g�@�q�Ʀr�C���A 
        ��q���Ʀr��ؼФj�����Too Big !! 
        ��q���Ʀr��ؼФp�����Too Small !! 
        �q���ؼ����You got it !!
        �õ����C���C
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
