#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	�����Ӽƪ��Ʀr�`�M�P�����G
	�Q��while loop�@����J�@�ӼƦr�A�Y��J�D�Ʀr���^��r���h����A
	�p��ÿ�X ������J�Ʀr���`�M�M�����C
*/

int main(int argc,int *argv[]){
	
	char input[12];
	int valid = 0;
	int number = 0;
	int ans = 0;
	
	while(1){
		valid = 1;
		scanf("%s",input);
		int i;
		for(i = 0;i<strlen(input);i++){
			if(input[i]>'9'||input[i]<'0'){
				valid = 0;
				break;
			}
		}
		if(!valid)break;
		
		ans+=atoi(input);
		number++;
	}
	if(!number){
		printf("�`�M = 0 ,���� = 0\n");
	}else{
		printf("�`�M = %d ,���� = %.2f\n",ans,(double)ans/number);
	}
	
	return 0;
} 
