#include<stdio.h>
/*
	�E�E���k��G
	�ХH�u�����v�C�L�X�E�E���k��C�p
	1x1=1 2x1=2.......9x1=9
	1x2=2 2x2=4......9x2=18
	...
	1x9=9 2x9=18....9x9=81
*/
int main(int argc,char *argv[]){
	int i,j;
	for(i = 1;i<=9;i++){
		for(j = 1;j<=9;j++){
			printf("%dx%d=%2d ",j,i,i*j);
		}
		printf("\n");
	}
	return 0;
}
