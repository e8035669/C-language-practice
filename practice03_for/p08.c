#include<stdio.h>
/*
	3的倍數問題：
	請輸入一個正數N，然後印出從1~N所有的整數，
	如遇到3的倍數，則改印星號。
	(如：1~10，結果：1 2 * 4 5 * 7 8 * 10) 。
*/
int main(int argc,char *argv[]){
	int N = 0;
	printf("請輸入一整數：");
	scanf("%d",&N);
	int i = 1;
	for(;i<=N;i++){
		if(i%3){
			printf("%d ",i);
		}else{
			printf("* ");
		}
	}
	return 0;
}
