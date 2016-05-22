#include <stdio.h>
#include <stdlib.h>

int main(){
	int input[5] = {0};
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&input[i]);
	}

	int j;
	for(i=0;i<5-1;i++){
		for(j=0;j<5-i-1;j++){
			if(input[j]>input[j+1]){
				int tmp = input[j];
				input[j] = input[j+1];
				input[j+1] = tmp;
			}
		}
	}
	for(i=0;i<5;i++)printf("%d ",input[i]);
	printf("\n");

	for(i=0;i<5-1;i++){
		for(j=0;j<5-i-1;j++){
			if(input[j]<input[j+1]){
				int tmp = input[j];
				input[j] = input[j+1];
				input[j+1] = tmp;
			}
		}
	}
	for(i=0;i<5;i++)printf("%d ",input[i]);
	printf("\n");



}
