#include<stdio.h>
int main()
{
	int maths,physics,chemistry,total;
	printf("enter your marks in maths ");
	scanf("%d",&maths);
	printf("enter your marks in physics");
	scanf("%d",&physics);
	printf("enter your marks in chemistry");
	scanf("%d",&chemistry);
	total=maths+physics+chemistry;
	printf("total marks of subjects=%d\n",total);
	
	
	if(total>=120)
	{
		printf("you can appear for JEE advance");
		
	}
	
	else
	{
		printf("Collages apart from IITS & NITS is waiting for you");
		
	}
	return 0;
}
