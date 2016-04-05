#include<stdio.h>
/*
	輸入一正整數N，求N! （如:3!=1*2*3。請用for loop實作）
*/
int main(int argc,char *argv[]){
	int N = 0,i;
	size_t ans = 1;
	printf("輸入一正整數N，求N!：");
	scanf("%d",&N);
	printf("%d!=1",N);
	for(i = 2;i<=N;i++){
		printf("*%d",i);
		ans*=i;
	}
	printf("=%lld",ans);
}
