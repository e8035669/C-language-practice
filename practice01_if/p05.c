#include <stdio.h>
int main(int argc,char *argv[]){
	
	int score;
	printf("块だ计0~100だ");
	scanf("%d",&score);
	
	if(score>=0&&score<60){
		printf("%d だ琌 E 单\n",score);
	}else if(score<70){
		printf("%d だ琌 D 单\n",score);
	}else if(score<80){
		printf("%d だ琌 C 单\n",score);
	}else if(score<90){
		printf("%d だ琌 B 单\n",score);
	}else if(score<=100){
		printf("%d だ琌 A 单\n",score);
	}else{
		printf("invalid score.\n");
	}
	
	
	
	
	return 0;
} 
