#include <stdio.h>
#include <stdlib.h>

/*
        �`�M�p��G
        ��J�@�����N�A�����1+2+....+N �`�M�C(�p�G��J9�A���G�G1+2+3+4+5+6+7+8+9=)
 */

int main(int argc, char *argv[]) {
    int n = 0;
    printf("��J�@�ӥ���ơG");
    scanf("%d", &n);

    int count = 1;
    int ans = 0;
    while (count != n) {
        ans += count;
        printf("%d+", count);
        count++;
    }
    ans += n;
    printf("%d=%d\n", n, ans);

    return 0;
}
