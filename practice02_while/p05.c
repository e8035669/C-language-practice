#include <stdio.h>

/*
        �]���ˬd�G
        ��J��ӥ���� A�BB�A�N��A�n�䪺�Ʀr�d��C ��X A~B �������O 2�B3�B5 �����ƪ��Ʀr���X�ӡC
 */
int main(int argc, char *argv[]) {

    int A = 0, B = 0;
    printf("�]���ˬd\n��J��ӥ����A B�G");
    scanf("%d%d", &A, &B);

    int count = 0;
    printf("%d �� %d ���� ���O2 3 5�����Ʀ��G", A, B);
    if (A > B) {
        int tmp = A;
        A = B;
        B = tmp;
    }

    while (A <= B) {
        if ((A % 2)&&(A % 3)&&(A % 5)) {
            printf("%d ", A);
            count++;
        }
        A++;
    }
    printf("\n�@%d��\n", count);


    return 0;
}
