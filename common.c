#include<stdio.h>
int check(int,int);
int main()
{
	int a,b,result;
	printf("Input first number:");
	scanf("%d",&a);
	printf("Input second number:");
	scanf("%d",&b);
	result=check(a,b);
	printf("LCM of %d and %d = %d",a,b,result);
	return 0;
}
int check(int a,int b)
{
	int max;
	max=a>b?a:b;
	while(1)
	{
		if(max%a==0 && max%b==0)
		{
			return max;
			break;
		}
		++max;
	}
}
