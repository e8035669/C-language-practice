#include<stdio.h>
/*
	3�����ư��D�G
	�п�J�@�ӥ���N�A�M��L�X�q1~N�Ҧ�����ơA
	�p�J��3�����ơA�h��L�P���C
	(�p�G1~10�A���G�G1 2 * 4 5 * 7 8 * 10) �C
*/
int main(int argc,char *argv[]){
	int N = 0;
	printf("�п�J�@��ơG");
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
