#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
	ぃ计计羆㎝籔キА
	ノwhile loopΩ块计璝块獶计璣ゅダ玥氨ゎ
	璸衡块 场块计羆㎝㎝キА
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
		printf("羆㎝ = 0 ,キА = 0\n");
	}else{
		printf("羆㎝ = %d ,キА = %.2f\n",ans,(double)ans/number);
	}
	
	return 0;
} 
