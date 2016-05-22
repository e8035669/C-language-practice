#include<stdio.h>
#include<stdlib.h>
void setDec2Float(int[],int);
int main(){
	int floatNumber[32] = {0};
	int input = 0;
	printf("Please input a number :");
	scanf("%d",&input);

	setDec2Float(floatNumber,input);

	int i;
	for(i=0;i<32;i++){
		printf("%d ",floatNumber[i]);
	}


	return 0;
}
void setDec2Float(int floatNum[],int decimal){
	/**
		  1bit    8 bits     23 bits
		|----------------------------|
		| Sign | Exponent | Fraction |
		|----------------------------|

	*/

	if(decimal<0){
		floatNum[0] = 1;
		decimal = decimal*-1;
	}else{
		floatNum[0] = 0;
	}

	unsigned int num = decimal;
	unsigned int mask = 1<<31;
	int index = 0;
	while(index<32 && !(mask&num)){
		mask>>=1;
		index++;
	}

	unsigned char exp = 127;
	int floatIndex = 9;
	index++;
	mask>>=1;
	while(index<32){
		floatNum[floatIndex] = (mask&num)?1:0;
		exp++;
		index++;
		floatIndex++;
		mask>>=1;
	}

	int i,j;
	unsigned char chMask = 1<<7;
	for(i=1,j=0;i<9&&j<8;i++,j++){
		floatNum[i] = (chMask&exp)?1:0;
		chMask>>=1;
	}
}
