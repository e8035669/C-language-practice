#include<stdio.h>
/*
	¨D N!¡G
*/
int main(int argc,char *argv[]){
	int N = 0,i;
	size_t ans = 1;
	printf("¨DN¶¥¡G");
	scanf("%d",&N);
	for(i = 1;i<=N;i++){
		ans*=i;
	}
	printf("%d! = %lld",N,ans);
}
