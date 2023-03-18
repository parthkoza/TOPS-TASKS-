#include<stdio.h>
int main()
{
	char a;
	printf("enter the operator: ");
	scanf("%c",&a);
	switch (a)
	{
		case '+':
		{
			float b,c,e;
			scanf("%f%f",&b,&c);
			e=b+c;
			printf("=%f",e);
			
	    }
			break;
			
		case '-':
		{
			float b,c,e;
			scanf("%f%f",&b,&c);
			e=b-c;
			printf("=%f",e);
			
	    }
			break;
			
			case '*':
		{
			float b,c,e;
			scanf("%f%f",&b,&c);
			e=b*c;
			printf("=%f",e);
			
	    }
			break;
			case '/':
		{
			float b,c,e;
			scanf("%f%f",&b,&c);
			e=b/c;
			printf("=%f",e);
			
	    }
			break;
			
			default :
				printf("enter a valid operator");
				
	}
	return 0;
		
	
}
