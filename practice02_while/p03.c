#include <stdio.h>
#include <stdlib.h>
/*
	總和計算：
	輸入一正整數N，並顯示1+2+....+N 總和。(如：輸入9，結果：1+2+3+4+5+6+7+8+9=)
*/

int main(int argc,char *argv[]){
	int n = 0;
	printf("輸入一個正整數：");
	scanf("%d",&n);
	
	int count = 1;
	int ans = 0;
	while(count!=n){
		ans += count;
		printf("%d+",count);
		count++;
	}
	ans+=n;
	printf("%d=%d\n",n,ans);
	
	return 0;
}
