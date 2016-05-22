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

	floatNum[0] = (decimal<0);
	decimal *= -floatNum[0];

	unsigned int mask = 1<<31;
	int index = 0;
	while((mask&decimal)>0){
		mask>>=1;
		index++;
	}
	printf("step1:\n");

	unsigned char exp = 127;
	int* point = &(floatNum[9]);
	for(index++;index<32;point++,index++){
		(*point) = (((mask&decimal)>0)?1:0);
		exp++;
	}
	printf("step2:\n");

	unsigned char chMask = 1<<7;
	for(point = &(floatNum[1]);point<(&floatNum[9])&&chMask>0;point++,chMask>>=1){
		(*point) = (((chMask&exp)>0)?1:0);
	}
	printf("step3:\n");

}
