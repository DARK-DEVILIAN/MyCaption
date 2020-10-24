#include<stdio.h>
int check(int);
int main()
{
	int a,b;
	printf("Enter a Number:");
	scanf("%d",&a);
	b=check(a);
	if(b==1)
	{
		printf("%d is a Prime Number",a);
	}
	else
	{
		printf("%d is not a Prime Number",a);
	}
	return 0;
}
int check(int prime)
{
	if(prime==1)
	{
		return 0;
	}
	else if(prime==2)
	{
		return 1;
	}
	else
	{
		int b,ind,val;
		b=prime-1;
		ind=0;
		for(b;b>1;b--)
		{
			val=prime%b;
			if(val==0)
			{
				ind=1;
			}
		}
		if(ind==1)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
}
