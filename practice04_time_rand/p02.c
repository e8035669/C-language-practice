#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char *argv[]){
	long start = clock();
	srand((unsigned int)time(NULL));
	while(1){
		if(getch()==27)break;
		printf("%d\n",rand()%6+1);
	}
	
	
	printf("��������ɶ��G%d��\n",(clock()-start)/CLOCKS_PER_SEC);
	system("pause");
	return 0;
}
