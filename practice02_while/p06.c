#include <stdio.h>
#include <stdlib.h>

/*
        ����ˬd�G
        �q1~10000���e��X�e30�ӽ�ơC
 */

int main(int argc, char *argv[]) {
    int *data = (int*) calloc(10001, sizeof (int));
    int i, j;
    //0 --> ���  1--> �X��
    for (i = 2; i < 10000; i++)if (!data[i])for (j = i + i; j < 10000; j += i)data[j] = 1;

    printf("���1~10000�e30�ӽ�ơG\n");
    i = 2;
    int count = 0;
    while (i < 10000 && count < 30) {
        if (!(data[i])) {
            printf("%d ", i);
            count++;
        }
        i++;
    }
    printf("\n");

    return 0;
}
