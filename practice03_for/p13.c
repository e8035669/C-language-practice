#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
int main(int argc,char *argv[]) {
	int n = 0;
	scanf("%d",&n);
	const double dx = 1.0/n;
	const double dy = 1.0/n;
	time_t timeStamp;
	//----------------------------------------------
	timeStamp = time(NULL);
	long double x = 0.0;
	register long double ans = 0.0;
	for(x=0.0; x<1; x+=dx) {
		ans+=(sqrtl(1-powl(x,2))*dx);
	}
	printf("pi 的近似值 %lf\n",(double)(ans*4));
	printf("花費時間：%ds\n",time(NULL)-timeStamp);

	//-----------------------------------------------
	x = 0.0;
	ans = 0.0;
	long double y = 0.0;


	timeStamp = time(NULL);
	for(x = 0; x<1; x+=dx) {
		for(y=dx; (powl(x,2)+powl(y,2))<1; y+=dy) {
			ans+=(sqrtl(1-powl(x,2)-powl(y,2))*dx*dy);
		}
	}
	printf("半徑1的球體積： %lf\n",(double)(ans*8));
	printf("花費時間：%ds\n",time(NULL)-timeStamp);

	//----------------------------------------------


	double a=0.0,b=0.0;
	printf("請輸入a b : ");
	scanf("%lf%lf",&a,&b);
	timeStamp = time(NULL);
	long double tmp1=b/a,tmp2=powl(a,2);
	x=0.0;
	ans=0.0;
	for(x=0; x<a; x+=dx) {
		ans+=(tmp1*sqrtl(tmp2-powl(x,2))*dx);
	}
	printf("橢圓面積：%lf\n",(double)(ans*4));
	printf("花費時間：%ds\n",time(NULL)-timeStamp);

	return 0;
}
