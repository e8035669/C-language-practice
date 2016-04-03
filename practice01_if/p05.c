#include <stdio.h>
/*
	成績等第： 
	使用五分法將滿分為100分的分數轉換成ABCDE五等地，其中
	A: 90~100; 
	B: 80~89; 
	C: 70~79; 
	D: 60~69; 
	E:0~59 
*/


int main(int argc,char *argv[]){
	
	int score;
	printf("輸入分數0~100分：");
	scanf("%d",&score);
	
	if(score>=0&&score<60){
		printf("%d 分是 E 等\n",score);
	}else if(score<70){
		printf("%d 分是 D 等\n",score);
	}else if(score<80){
		printf("%d 分是 C 等\n",score);
	}else if(score<90){
		printf("%d 分是 B 等\n",score);
	}else if(score<=100){
		printf("%d 分是 A 等\n",score);
	}else{
		printf("invalid score.\n");
	}
	
	return 0;
} 
