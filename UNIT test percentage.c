#include<stdio.h> 

//UNIT test percantage out of 40
int main ()
{
	float a,b,c,d,percentage,total;
	printf("Enter maths mark:");
	scanf("%f",&a);
	printf("Enter physics mark:");
	scanf("%f",&b);
	printf("Enter chemistry mark:");
	scanf("%f",&c);
	printf("Enter English mark:");
	scanf("%f",&d);
	total=(a+b+c+d);
	percentage=(100*total)/160;
	printf("your Percentage is :%f",percentage);
	
	return 0;
	
}

