#include<stdio.h>
/*
	��J�@�����N�A�D1+2!+3!+...+N!���M �]������for loop�����^
*/
int main(int argc,char *argv[]){
	int N = 0,i;
	printf("��J�@�����N�A�D1+2!+3!+...+N!���M�G");
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
