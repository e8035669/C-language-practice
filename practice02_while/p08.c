#include <stdio.h>
#include <stdlib.h>
/*
	ASCII：
	利用 while loop 讓使用者可以重複輸入鍵盤上任意按鍵，並在螢幕上顯示該按鍵對應之ASCII碼。
	若輸入為ESC則顯示其ASCII碼後結束程式
*/

int main(int argc,char *argv[]){
	char input;
	do{
		input = getch();
		printf("%d\n",input);
		
	}while(input!=27);
	
	return 0;
}
