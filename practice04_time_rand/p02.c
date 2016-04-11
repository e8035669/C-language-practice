#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
/*
    擲骰子遊戲：
    撰寫一擲骰子遊戲程式，每次隨機出現1~6
*/


int main(int argc,char *argv[]){
	long start = clock();
	srand((unsigned int)time(NULL));
	while(1){
		if(getch()==27)break;
		printf("%d\n",rand()%6+1);
	}


	printf("本次執行時間：%d秒\n",(clock()-start)/CLOCKS_PER_SEC);
	system("pause");
	return 0;
}
