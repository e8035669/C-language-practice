#include<stdio.h>
/*
	��J�@�����N�A�DN! �]�p:3!=1*2*3�C�Х�for loop��@�^
*/
int main(int argc,char *argv[]){
	int N = 0,i;
	size_t ans = 1;
	printf("��J�@�����N�A�DN!�G");
	scanf("%d",&N);
	printf("%d!=1",N);
	for(i = 2;i<=N;i++){
		printf("*%d",i);
		ans*=i;
	}
	printf("=%lld",ans);
}
