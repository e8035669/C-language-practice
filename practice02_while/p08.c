#include <stdio.h>
#include <stdlib.h>
/*
	ASCII�G
	�Q�� while loop ���ϥΪ̥i�H���ƿ�J��L�W���N����A�æb�ù��W��ܸӫ��������ASCII�X�C
	�Y��J��ESC�h��ܨ�ASCII�X�ᵲ���{��
*/

int main(int argc,char *argv[]){
	char input;
	do{
		input = getch();
		printf("%d\n",input);
		
	}while(input!=27);
	
	return 0;
}
