#include<stdio.h>
#include<time.h>
int main(int argc,char *argv[]){
	long test1;
	long test2;
	long test3;
	long test4;
	
	int i = 1;
	long long ans = 0;
	test1 = clock();
	for(;i<10000001;i++){
		ans+=i;
	}
	test2 = clock();
	printf("%lld\n",ans);
	printf("Used time : %d ms\n",test2-test1);
	
	
	test3 = clock();
	ans = (long long)(1+10000000)*(long long)10000000/2;
	test4 = clock();
	printf("%lld\n",ans);
	printf("Used time : %d ms\n",test4-test3);
	
	
	return 0;
}
