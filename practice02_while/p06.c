#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]){
	int *data = (int*)calloc(10001,sizeof(int));
	int i ,j;
	//0 --> 質數  1--> 合數
	for(i = 2;i<10000;i++)if(!data[i])for(j=i+i;j<10000;j+=i)data[j]=1;
	
	printf("顯示1~10000 前30個質數\n");
	i = 2;
	int count = 0;
	while(i<10000&&count<30){
		if(!(data[i])){
			printf("%d ",i);
			count++;
		}
		i++;
	}
	printf("\n");
	
	return 0;
}
