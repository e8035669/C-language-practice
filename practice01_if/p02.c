#include<stdio.h>
#include <stdlib.h>

/*
	BMI�p��G 
	�ФJ�����B�魫�A�p��BMI�ȡC(BMI�ȭp�⤽��: BMI = �魫(����) / ����2) 
	BMI�Ȥp��18.5 ����魫�L�� 
	BMI�Ȥj��18.5 �p��24 ���� ��ܥ��`�d�� 
	BMI�Ȥj�󵥩�24 ����魫�L�D
*/
int main(int argc, char *argv[]){
	int height = 0,weight = 0;
	printf("�п�J�����G");
	scanf("%d",&height);
	printf("�п�J�魫�G");
	scanf("%d",&weight);
	
	double BMI = weight/((double)height*height/10000);
	printf("BMI = %.2f",BMI);
	if(BMI<18.5){
		printf("�魫�L��\n");
	} else if(BMI<24){
		printf("���`�d��\n");
	}else{
		printf("�魫�L�D\n");
	}
	
	
	
	return 0;
}