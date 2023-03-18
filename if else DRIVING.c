#include<stdio.h>
int main()
{
	int age;
	printf("enter your age");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("you are eligible to drive");
	}
	else
	{
		printf("you are not eligible to drive");
	}
	return 0;
}
