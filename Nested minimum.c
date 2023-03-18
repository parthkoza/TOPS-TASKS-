#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a value of a");
	scanf("%d",&a);
	printf("Enter a value of b");
	scanf("%d",&b);
	printf("Enter a value of c");
	scanf("%d",&c);
	if(a<b)
	{
		if(a<c)
		{
			printf("a is the minimum number");
		}
		else
		{
			printf("c is the minimum number");
		}
	}
	else
	  {
		if(b<c)
		{
		printf("b is the minimum number");
	    }
	    else 
      	{
		printf("c is the minimum number");
		}
	}
	return 0;
}
