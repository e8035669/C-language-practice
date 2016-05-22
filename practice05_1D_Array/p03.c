#include <stdio.h>
#include <stdlib.h>

int main(){

	char A[27] = {0};
	int i;
	for(i=0;i<27;i++)A[i]='*';

	char input = 0;

	while(1){
		scanf("%c",&input);
		if(input == '@')break;
		if(input == '\n')continue;

		if(input>='a'&&input<='z'){
			A[input-'a'+1] = input;
		}else if(input>='A'&&input<='Z'){
			A[input-'A'+1] = input-'A'+'a';
		}

	}
	for(i=1;i<27;i++){
		putchar(A[i]);
	}
	putchar('\n');


	return 0;
}
