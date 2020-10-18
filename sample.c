#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first Number:");
	scanf("%d",&a);
	printf("Enter the second Number:");
	scanf("%d",&b);
	printf("BEFORE SWAPPING:\nThe numbers are %d and %d\n\n\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("AFTER SWAPPING:\nThe numbers are %d and %d",a,b);
	return 0;
}
