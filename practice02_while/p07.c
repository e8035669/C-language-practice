#include <stdio.h>
#include <stdlib.h>

/*
        打字練習：
        利用while loop重複處理一次輸入一個英文字母字元，並將該字元作大小寫轉換。若輸入非英文字母則停止。
 */
int main(int argc, char *argv[]) {

    char input = 0;

    while (scanf("%c", &input) {
            if (input >= 'a' && input <= 'z') {
                printf("%c\n", input - 32);
            } else if (input >= 'A' && input <= 'Z') {
                printf("%c\n", input + 32);
            } else {
                break;
            }
    }
    return 0;
}