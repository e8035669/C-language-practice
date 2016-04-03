#include<stdio.h>
/*
	因數檢查：
	輸入一正整數，並找出其所有的因數
*/
int main(int argc,char *argv[]){
	
	long long n = 0;
	printf("輸入一個數字 找出其因數：");
	scanf("%d",&n);
	long long count = 1;
	
	printf("%lld 的因數有：",n);
	while(count <= n){
		if(!(n%count)){
			printf("%lld ",count);
		}
		count++;
	}
	
	return 0;
}
