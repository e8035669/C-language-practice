#include<stdio.h>
/*
	整除數字：
	請找出1~100中，可同時被3和8整除之所有整數的總和。
*/
int main(int argc,char *argv[]){
	int i,ans = 0;
	for(i = 1;i<=100;i++){
		if(!(i%24))ans+=i;
	}
	printf("1~100中 可同時被3和8整除之整數的總和是 %d\n",ans);
	
	return 0;
}
