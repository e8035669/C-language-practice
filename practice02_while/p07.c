#include <stdio.h>
#include <stdlib.h>

/*
        ���r�m�ߡG
        �Q��while loop���ƳB�z�@����J�@�ӭ^��r���r���A�ñN�Ӧr���@�j�p�g�ഫ�C�Y��J�D�^��r���h����C
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