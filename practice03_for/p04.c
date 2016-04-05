#include<stdio.h>
/*
	平方和：
	計算 0 到 20 的所有平方和並顯示於螢幕上。
*/
int main(int argc,char *argv[]){
	int i = 0;
	for(;i<=20;i++){
		printf("%d * %d = %d\n",i,i,i*i);
	}
	return 0;
}
