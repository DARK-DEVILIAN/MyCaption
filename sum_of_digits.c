#include<stdio.h>
#include<math.h>
int main()
{
	unsigned long int a;
	int b,i,sum=0;
	printf("Enter the number:");
	scanf("%ul",&a);
	b=log10(a)+1;
	for(i=1;i<=b;i++)
	{
		sum+=i;
	}
	printf("Sum of the Digits is %d",sum);
	return 0;
}
