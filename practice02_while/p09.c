#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
	猜10秒：
	利用時間函數計算程式執行時間，讓使用者從程式開始默唸10秒（或任意秒數）後到按下空白鍵後停止，
	輸出程式實際執行時間與10秒的差距，並計算差異的百分比。
*/

int main(int argc,char *argv[]){
	printf("猜10秒\n按任意鍵開始計時\n");
	getch();
	long long before = time(NULL);
	printf("10秒後按任意鍵停止並計算成績\n");
	getch();
	long long after = time(NULL);
	
	if(before == (after-10)){
		printf("恭喜剛好10秒~~\n");
	}else{
		printf("失敗，你的成績是%d秒\n",after-before);
	}
	
	return 0;
}
