#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[]){
	int n = 0;
	printf("輸入一整數：");
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
