#include<stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int height = 0,weight = 0;
	printf("請輸入身高：");
	scanf("%d",&height);
	printf("請輸入體重：");
	scanf("%d",&weight);
	
	double BMI = weight/((double)height*height/10000);
	printf("BMI = %.2f",BMI);
	if(BMI<18.5){
		printf("體重過輕\n");
	} else if(BMI<24){
		printf("正常範圍\n");
	}else{
		printf("體重過胖\n");
	}
	
	
	
	return 0;
}
