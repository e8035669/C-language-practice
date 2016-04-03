#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int height = 0,weight = 0;
	printf("請輸入身高：");
	scanf("%d",&height);
	printf("請輸入體重：");
	scanf("%d",&weight);
	
	if(height<160&&weight>80){
		printf("Too fat!!\n");
	}else if(height>160&&weight<80){
		printf("Too shinny!!\n");
	}else{
		printf("Stardard~~\n");
	}
	
	return 0;
}
