#include<stdio.h>
/*
	�X��P�P��X�G
	�г]�p�@��C�y���{���A�ϥΪ̿�J�@�Ӥp��10 ����� x�A
	�b�ù��W��X�@���P��ƪ� '*' �p�U�]�Hx=6���ҡ^�G
*/

int main(int argc,char *argv[]){
	int x = 6;
	scanf("%d",&x);
	int i,j;
	//A
	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			printf("*");
		}
		printf("\n");
	}
	
	printf("\n");
	//------------------------------------------------
	//B
	for(i=1;i<=x;i++){
		for(j=1;j<=x-i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//------------------------------------------------
	//C
	for(i=1;i<=x;i++){
		for(j=x-i+1;j<=x;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//------------------------------------------------
	
	//D
	for(i=1;i<=x;i++){
		for(j=x-i+1;j<=x;j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=x;i++){
		for(j=1;j<=x-i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//------------------------------------------------
	
	
	//E
	for(i=1;i<=x;i++){
		for(j=1;j<=x-i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	
	
	for(i=2;i<=x;i++){
		for(j=x-i;j<=x-1;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//------------------------------------------------
	//F
	for(i=1;i<=x;i++){
		for(j=x;j>=i;j--){
			printf("*");
		}
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(j=x;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	for(i=x-1;i>=1;i--){
		for(j=x;j>=i;j--){
			printf("*");
		}
		for(j=1;j<i;j++){
			printf("  ");
		}
		for(j=x;j>=i;j--){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
