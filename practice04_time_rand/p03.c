#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
    擲骰子遊戲：
    撰寫一擲骰子遊戲程式，每次自己及莊家各丟出三個骰子，並顯示誰的點數大。
*/
int main(int argc,char *argv[]) {
	int client[3];
	int host[3];
	srand((unsigned int)time(NULL));
	int i;


	for(i = 0; i<3; i++) {
		client[i] = (int)(rand()%6+1);
		host[i] = (int)(rand()%6+1);
	}
	printf("自己的骰子：%d %d %d\n",client[0],client[1],client[2]);
	printf("莊家的骰子：%d %d %d\n",host[0],host[1],host[2]);

	int c = 0,h=0;
	for(i=0; i<3; i++) {
		c+=client[i];
		h+=host[i];
	}


	printf("%d 比 %d ",c,h);
	if(c>h) {
		printf("您獲勝了!\n");
	} else if(c<h) {
		printf("莊家獲勝!\n");
	} else {
		printf("平手\n");
	}

	return 0;
}
