#include <stdlib.h>
#include <stdio.h>
int main(int argc,char *argv[]){
	int input = 0;
	printf("�п�J�@�Ӿ�ơG");
	scanf("%d",&input);
	
	printf("%d %s�O 2 ������\n",input,(input%2)?"��":"");
	printf("%d %s�O 3 ������\n",input,(input%3)?"��":"");
	printf("%d %s�O 5 ������\n",input,(input%5)?"��":"");
	printf("%d %s�O 7 ������\n",input,(input%7)?"��":"");
	
	
	return 0;
}
