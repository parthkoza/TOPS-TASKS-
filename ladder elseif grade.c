#include<stdio.h>
int main()
{
	int physics,chemistry,maths,average;
	printf("enter your physics marks");
	scanf("%d",&physics);
	printf("enter your chemistry marks");
	scanf("%d",&chemistry);
	printf("enter your maths marks");
	scanf("%d",&maths);
    average=(physics+chemistry+maths)/3;
	printf("your average  is :-=%d\n",average);
    if(average>=95)
    {
    	printf("your grade is A++");
	}
	else if (average>=85)
	{
		printf("your grade is A+");
	}
	else if (average>=80)
    {
    	printf("your grade is A ");
   	}
	else if (average>=70)
    {
    	printf("your grade is B+ ");
   	}
   		else if (average >=60)
    {
    	printf("your grade is B ");
   	}
	else if (average>=50)
    {
    	printf("your grade is C+ ");
   	}
	else if (average>=40)
    {
    	printf("your grade is C ");
   	}
	else if (average>=35)
    {
    	printf("your grade is D ");
   	}
   	else
   	{
   		printf("so sad to tell you that you are FAIL,better luck next time");
	}

}

