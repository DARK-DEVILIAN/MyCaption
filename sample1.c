#include<stdio.h>
int main()
{
	int a;
	printf("Enter Marks:");
	scanf("%d",&a);
	if(a<=100 && a>=85)
	{
		printf("Grade A");
	}
	else if(a<=84 && a>=70)
	{
		printf("Grade B");
	}
	else if(a<=69 && a>=55)
	{
		printf("Grade C");
	}
	else if(a<=54 && a>=40)
	{
		printf("Grade D");
	}
	else
	{
		printf("Grade F");
	}
	return 0;
}
