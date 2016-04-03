#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*	身高體重計算：
	輸入身高、體重 
	身高低於160且體重大於80顯示 Too fat !! 
	身高高於160且體重小於80顯示 Too skinny !! 
	其餘情況顯示 Standard~~
*/

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