#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/*
    �Y��l�C���G
    ���g�@�Y��l�C���{���A�C���ۤv�β��a�U��X�T�ӻ�l�A����֪ܽ��I�Ƥj�C
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
	printf("�ۤv����l�G%d %d %d\n",client[0],client[1],client[2]);
	printf("���a����l�G%d %d %d\n",host[0],host[1],host[2]);

	int c = 0,h=0;
	for(i=0; i<3; i++) {
		c+=client[i];
		h+=host[i];
	}


	printf("%d �� %d ",c,h);
	if(c>h) {
		printf("�z��ӤF!\n");
	} else if(c<h) {
		printf("���a���!\n");
	} else {
		printf("����\n");
	}

	return 0;
}
