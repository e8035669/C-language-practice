#include <stdlib.h>
#include <stdio.h>
/*
	簡易因數檢查： 
	輸入一正整數，並檢查 2,3,5,7 是否為其因數，結果顯示於螢幕上
*/
int main(int argc,char *argv[]){
	int input = 0;
	printf("請輸入一個整數：");
	scanf("%d",&input);
	
	printf("%d %s是 2 的倍數\n",input,(input%2)?"不":"");
	printf("%d %s是 3 的倍數\n",input,(input%3)?"不":"");
	printf("%d %s是 5 的倍數\n",input,(input%5)?"不":"");
	printf("%d %s是 7 的倍數\n",input,(input%7)?"不":"");
	return 0;
}
