#include<stdio.h>

int main()
{
	int a,b,c;
	printf ("Enter a value of a");
	scanf("%d",&a);
	printf ("Enter a value of b");
	scanf("%d",&b);
	printf ("Enter a value of c");
	scanf("%d",&c);
	if (a>b)
	{
		if(a>c)
		{
			printf("a is maximum number");
		}
		else 
		{
			printf("b is maximum number");
		}
	}
	else
	{
		if(c>b)
		{
			printf("c is maximum number");
		}
		else 
		{
			printf("b is maximum number");
		}
	}
}

