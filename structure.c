#include<stdio.h>
#include<conio.h>
int find(int);
void display();
int find(int a)
{
	switch(a)
	{
		case 0:
			return 1;
			break;
		case 1:
			return 2;
			break;
		case 2:
			return 3;
			break;
		case 3:
			return 4;
			break;
		case 4:
			return 5;
			break;
		case 5:
			return 6;
			break;
		case 6:
			return 7;
			break;
		case 7:
			return 8;
			break;
		case 8:
			return 9;
			break;
		case 9:
			return 10;
			break;
		case 10:
			return 11;
			break;
		case 11:
			return 12;
			break;
		case 12:
			return 13;
			break;
		case 13:
			return 14;
			break;
		case 14:
			return 15;
			break;
		case 15:
			return 16;
			break;
		case 16:
			return 17;
			break;
		case 17:
			return 18;
			break;
		case 18:
			return 19;
			break;
		default:
			return 20;
			break;
	}
}
void display()
{
	system("cls");
	printf("EMPLOYEE DETAILS:\n\n");
	printf("NAME\n");
	printf("AGE\n");
	printf("DEPARTMENT\n");
	printf("PHONE NUMBER\n");
	printf("SALARY\n");
}
struct emp{
	int empage;
	char empname[20],deptname[20];
	unsigned long long int salary;
	unsigned long long int phone_number;
}emp[20];
int main()
{
	int i,temp,k;
	printf("EMPLOYEE DETAILS:\n");
	for(i=0;i<20;i++)
	{
		temp=find(i);
		printf("PERSON %d:\n",temp);
		printf("NAME:");
		scanf("%s",&emp[i].empname);
		printf("AGE:");
		scanf("%d",&emp[i].empage);
		printf("CONTACT NUMBER:");
		scanf("%llu",&emp[i].phone_number);
		printf("SALARY:");
		scanf("%llu",&emp[i].salary);
		printf("DEPARTMENT:");
		scanf("%s",&emp[i].deptname);
		printf("\n\n\a");
	}
	display();
	for(k=0;k<20;k++)
	{
		printf("%s\n%d\n%s\n%llu\n%llu\n\n",emp[k].empname,emp[k].empage,emp[k].deptname,emp[k].phone_number,emp[k].salary);
	}
	printf("\a");
	return 0;
}
