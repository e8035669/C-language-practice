#include<stdio.h>

/*
        �]���ˬd�G
        ��J�@����ơA�ç�X��Ҧ����]��
 */
int main(int argc, char *argv[]) {

    long long n = 0;
    printf("��J�@�ӼƦr ��X��]�ơG");
    scanf("%d", &n);
    long long count = 1;

    printf("%lld ���]�Ʀ��G", n);
    while (count <= n) {
        if (!(n % count)) {
            printf("%lld ", count);
        }
        count++;
    }

    return 0;
}