#include <stdio.h>
int main(int argc,char *argv[]){
	int ans = 10;
	int input = 0;
	do{
		printf("�q�@�ӼƦr�G");
		scanf("%d",&input);
		
		if(input>ans){
			printf("Too Big !!\n"); 
		}else if(input < ans){
			printf("Too Small !!\n");
		}else{
			printf("You got it!!\n");
		}
		
	}while(input!=ans);
	
	return 0;
}
