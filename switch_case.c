#include<stdio.h>
int main()
{
	int a;
	printf("Select your food:\n1.Pizza,Rs 239\n2.Burger,Rs 129\n3.Pasta,Rs 179\n4.French Fries,Rs 99\n5.Sandwich,Rs 149\n");
	scanf("%d",&a);
	switch(a)
	{
		case 1:
			printf("Food item - Pizza\nPrice - Rs 239");
			break;
		case 2:
			printf("Food item - Burger\nPrice - Rs 129");
			break;
		case 3:
			printf("Food item - Pasta\nPrice - Rs 179");
			break;
		case 4:
			printf("Food item - French Fries\nPrice - Rs 99");
			break;
		case 5:
			printf("Food item - Sandwich\nPrice - Rs 149");
			break;
		default:
			printf("You have entered the wrong choice.\nPlease retry!!!");
	}
	return 0;
}
