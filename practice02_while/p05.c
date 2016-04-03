#include <stdio.h>

/*
        因數檢查：
        輸入兩個正整數 A、B，代表你要找的數字範圍。 輸出 A~B 之間不是 2、3、5 的倍數的數字有幾個。
 */
int main(int argc, char *argv[]) {

    int A = 0, B = 0;
    printf("因數檢查\n輸入兩個正整數A B：");
    scanf("%d%d", &A, &B);

    int count = 0;
    printf("%d 到 %d 之間 不是2 3 5的倍數有：", A, B);
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
    printf("\n共%d個\n", count);


    return 0;
}
