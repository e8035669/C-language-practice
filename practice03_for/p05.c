#include<stdio.h>
/*
	�E�E���k��G
	�ЦC�L�X�E�E���k��C�p
	1x1=1 1x2=2.......1x9=9
			2x1=2 2x2=4......2x9=18

	9x1=9 9x2=18....9x9=81
*/
int main(int argc,char *argv[]) {
	int i,j;
	for(i = 1; i<=9; i++) {
		for(j = 1; j<=9; j++) {
			printf("%dx%d=%2d ",i,j,i*j);
		}
		printf("\n");
	}
	return 0;
}
