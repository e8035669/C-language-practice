#include<stdio.h>
/*
	�㰣�Ʀr�G
	�Ч�X1~100���A�i�P�ɳQ3�M8�㰣���Ҧ���ƪ��`�M�C
*/
int main(int argc,char *argv[]){
	int i,ans = 0;
	for(i = 1;i<=100;i++){
		if(!(i%24))ans+=i;
	}
	printf("1~100�� �i�P�ɳQ3�M8�㰣����ƪ��`�M�O %d\n",ans);
	
	return 0;
}
