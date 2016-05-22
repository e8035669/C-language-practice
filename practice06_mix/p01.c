#include<stdio.h>
#include<stdlib.h>
int main(){
	srand((unsigned int)time(NULL));
	int data[10];
	getRand(data,10);




	return 0;
}
void getRand(int *data,int length){
	int i;
	for(i=0;i<length;i++){
		data[i] = rand()%10+1;
	}
}
