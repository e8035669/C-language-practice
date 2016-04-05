#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *argv[]){
	int N = 0;
	scanf("%d",&N);
	
	const long double n = (long double)1.0/(long double)N;
	//A = sin(x) x=0~pi/2 = 1
	long double tmp = 0;
	long double A = 0;
	for(;tmp<=M_PI_2;tmp+=n){
		A += (sinl(tmp)*n);
	}
	double Aans = A;
	printf("A = %f\n",Aans);
	
	
	//B = sin(x) x=0~pi = 2
	tmp = 0;
	long double B = 0;
	for(;tmp<=M_PI;tmp+=n){
		B += (sinl(tmp)*n);
	}
	double Bans = B;
	printf("B = %f\n",Bans);
	
	//C = sin(x)+cos(x) x=0~pi = 2
	tmp = 0;
	long double C = 0;
	for(;tmp<=M_PI;tmp+=n){
		C += ((sinl(tmp)+cosl(tmp))*n);
	}
	double Cans = C;
	printf("C = %f\n",Cans);
	
	
	//D = -8x^4+5x^3-7exp(X)^2-x+1563 x=-3.5~2.1 = 7454.357
	tmp = -3.5;
	long double D = 0;
	for(;tmp<=2.1;tmp+=n){
		D += (((-8)*powl(tmp,4)+5*powl(tmp,3)-7*powl(expl(tmp),2)-tmp+1563)*n);
	}
	printf("D = %f\n",(double)D);
	
	//E =  -2x^4-2x^3+87x^2+x-206.3 x=-6~5 = 3589.3
	tmp = -6;
	long double E = 0;
	for(;tmp<=5;tmp+=n){
		E += (((-2)*powl(tmp,4)-2*powl(tmp,3)+87*powl(tmp,2)+tmp-206.3)*n);
	}
	printf("E = %f\n",(double)E);
	
	
	//F =  ...... = 497.638
	tmp = -2.5;
	long double F = 0;
	for(;tmp<=10.6;tmp+=n){
		F += ((56.33*expl((-1)*powl(tmp-5.6,2)/10.5/M_PI))*n);
	}
	printf("F = %f\n",(double)F);
	
	return 0;
}
