#include <stdio.h>
int main(int argc,char *argv[]){
	
	int score;
	printf("��J����0~100���G");
	scanf("%d",&score);
	
	if(score>=0&&score<60){
		printf("%d ���O E ��\n",score);
	}else if(score<70){
		printf("%d ���O D ��\n",score);
	}else if(score<80){
		printf("%d ���O C ��\n",score);
	}else if(score<90){
		printf("%d ���O B ��\n",score);
	}else if(score<=100){
		printf("%d ���O A ��\n",score);
	}else{
		printf("invalid score.\n");
	}
	
	
	
	
	return 0;
} 
