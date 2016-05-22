#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
#define SIZE 10
void getRandNum(int[],int,int,int);
void printArray(int[],int);
double calAverage(int[],int);
double calStandardDeviation(double);
double calVariation(int[],int,double);
int main() {
	int arr[SIZE];
	int a=0,b=0;
	srand((unsigned int)time(NULL));
	printf("Please input a b: ");
	scanf("%d%d",&a,&b);
	getRandNum(arr,SIZE,a,b);

	printf("Array : ");
	printArray(arr,SIZE);


	double average = calAverage(arr,SIZE);
	printf("Average = %.2lf\n",average);

	double variation = calVariation(arr,SIZE,average);
	double standardDeviation = calStandardDeviation(variation);

	printf("Standard Deviation = %.2lf\n",standardDeviation);
	printf("Variation = %.2lf\n",variation);
}
void getRandNum(int arr[],int length,int minRange,int maxRange) {
	int i;
	for(i=0;i<length;i++){
		arr[i] = (rand()%(maxRange-minRange+1))+minRange;
	}
}
void printArray(int arr[],int length){
	int i;
	for(i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
double calAverage(int arr[],int length){
	int sum = 0,i=0;
	for(;i<length;i++){
		sum+=arr[i];
	}
	return (double)sum/length;
}
double calStandardDeviation(double variation){
	return sqrt(variation);
}
double calVariation(int arr[],int length,double average){
	double sum = 0.0;
	int i;
	for(i=0;i<length;i++){
		double tmp = (double)arr[i]-average;
		sum+=(tmp*tmp);
	}
	return sum/length;

}
