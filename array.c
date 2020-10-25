#include<stdio.h>
int main()
{
	int array[3][3],i,j,k,l;
	printf("Input Elements in the matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("element - [%d][%d] :",i,j);
			scanf("%d",&array[i][j]);
		}
	}
	printf("\nThe matrix is:\n\n");
	for(k=0;k<3;k++)
	{
		for(l=0;l<3;l++)
		{
			printf("%d\t",array[k][l]);
		}
		printf("\n");
	}
	return 0;
}
