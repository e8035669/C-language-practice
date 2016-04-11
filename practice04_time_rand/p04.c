#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(int argc,char *argv[]) {
	int input = 0;
	printf("請出拳 1)剪刀 2)石頭 3)布 ：");
	scanf("%d",&input);
	srand((unsigned int)time(NULL));
	int computer = rand()%3+1;

	switch(input) {
	case 1:
		printf("您出剪刀 ");
		break;
	case 2:
		printf("您出石頭 ");
		break;
	case 3:
		printf("您出布 ");
		break;
	default:
		printf("你亂出~~ ");
	}

	switch(computer) {
	case 1:
		printf("電腦出剪刀 ");
		break;
	case 2:
		printf("電腦出石頭 ");
		break;
	case 3:
		printf("電腦出布 ");
		break;
	default:
		printf("電腦亂出~~ ");
	}
	if(input>=1&&input<=3) {
        int result = input-computer;
		if(result==0) {
			printf("平手\n");
		}else if(result==1||result==-2){
            printf("您贏了!!\n");
		}else{
            printf("電腦贏了\n");
		}
	}else{
        printf("亂出沒勝負");
	}

    return 0;
}
