#include <stdio.h>

/*
        Θ罿单材 
        ㄏノきだ猭盢骸だ100だだ计锣传ΘABCDEき单ㄤい
        A: 90~100; 
        B: 80~89; 
        C: 70~79; 
        D: 60~69; 
        E:0~59 
 */

int main(int argc, char *argv[]) {

    int score;
    printf("块だ计0~100だ");
    scanf("%d", &score);

    if (score >= 0 && score < 60) {
        printf("%d だ琌 E 单\n", score);
    } else if (score < 70) {
        printf("%d だ琌 D 单\n", score);
    } else if (score < 80) {
        printf("%d だ琌 C 单\n", score);
    } else if (score < 90) {
        printf("%d だ琌 B 单\n", score);
    } else if (score <= 100) {
        printf("%d だ琌 A 单\n", score);
    } else {
        printf("invalid score.\n");
    }

    return 0;
} 