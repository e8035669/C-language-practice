#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
	�q10��G
	�Q�ήɶ���ƭp��{������ɶ��A���ϥΪ̱q�{���}�l�q��10��]�Υ��N��ơ^�����U�ť���ᰱ��A
	��X�{����ڰ���ɶ��P10���t�Z�A�íp��t�����ʤ���C
*/

int main(int argc,char *argv[]){
	printf("�q10��\n�����N��}�l�p��\n");
	getch();
	long long before = time(NULL);
	printf("10�������N�䰱��íp�⦨�Z\n");
	getch();
	long long after = time(NULL);
	
	if(before == (after-10)){
		printf("���߭�n10��~~\n");
	}else{
		printf("���ѡA�A�����Z�O%d��\n",after-before);
	}
	
	return 0;
}
