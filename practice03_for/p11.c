#include<stdio.h>
/*
	輸入一正整數N，求1+2!+3!+...+N!的和 （必須用for loop完成）
*/
int main(int argc,char *argv[]){
	int N = 0,i;
	printf("輸入一正整數N，求1+2!+3!+...+N!的和：");
	scanf("%d",&N);
	size_t ans = 0;
	size_t tmp = 1;
	for(i = 1;i<=N;i++){
		tmp*=i;
		ans+=tmp;
	}
	printf("%lld",ans);
	
	return 0;
}
