#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){

	int data[6] = {0};
	srand((unsigned int)time(NULL));

	int i,number;
	for(i=0;i<10;i++){
		number = rand()%6;
		data[number]++;
	}
	printf("1點\t2點\t3點\t4點\t5點\t6點\n");
	for(i=0;i<6;i++){
		printf("%d\t",data[i]);
	}
	printf("\n");



	return 0;
}
