#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char *argv[]) {
	int input = 0;
	printf("�ХX�� 1)�ŤM 2)���Y 3)�� �G");
	scanf("%d",&input);
	srand((unsigned int)time(NULL));
	int computer = rand()%3+1;

	switch(input) {
	case 1:
		printf("�z�X�ŤM ");
		break;
	case 2:
		printf("�z�X���Y ");
		break;
	case 3:
		printf("�z�X�� ");
		break;
	default:
		printf("�A�åX~~ ");
	}

	switch(computer) {
	case 1:
		printf("�q���X�ŤM ");
		break;
	case 2:
		printf("�q���X���Y ");
		break;
	case 3:
		printf("�q���X�� ");
		break;
	default:
		printf("�q���åX~~ ");
	}
	if(input>=1&&input<=3) {
        int result = input-computer;
		if(result==0) {
			printf("����\n");
		}else if(result==1||result==-2){
            printf("�zĹ�F!!\n");
		}else{
            printf("�q��Ĺ�F\n");
		}
	}else{
        printf("�åX�S�ӭt");
	}

    return 0;
}
