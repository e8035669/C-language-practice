#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int m = 0,n = 0;
	char input[257];
	printf("please input encoding key m and n :");
	scanf("%d%d",&m,&n);
	printf("please input encoding string:");
	scanf("%s",input);

	int i = 0,key = m-n-13;
	for(i=0;i<strlen(input);i++){
		input[i] += key;
	}
	printf("%s\n",input);

	return 0;
}
