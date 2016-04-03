#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv[]){
	int input = 0;
	printf("叫块俱计");
	scanf("%d",&input);
	
	printf("%d %s琌 2 计\n",input,(input%2)?"ぃ":"");
	printf("%d %s琌 3 计\n",input,(input%3)?"ぃ":"");
	printf("%d %s琌 5 计\n",input,(input%5)?"ぃ":"");
	printf("%d %s琌 7 计\n",input,(input%7)?"ぃ":"");
	
	
	return 0;
}
