#include<stdio.h>
int main()
{
	int a,b,res,choice;
	printf("=====BIRWISE OPRATIONS=====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n-----MENU-----\n");
	printf("1.Bitwise AND (&)\n");
	printf("2.Bitwise OR (|)\n");
	printf("3.Bitwise XOR (^)\n");
	printf("4.Bitwise NOT (~)\n");
	printf("5.Left shift (<<)\n");
	printf("6.Right shift (>>)\n");
	printf("\n Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			res=a&b;
			printf("Bitwise AND result=%d",res);
			break;
		case 2:
			res=a|b;
			printf("Bitwise OR result=%d",res);
			break;
		case 3:
			res=a^b;
			printf("Bitwise XOR result=%d",res);
			break;
		case 4:
			res=~a;
			printf("Bitwise NOT result=%d",res);
			break;
		case 5:
			res=a<<b;
			printf("Left shift result=%d",res);
			break;
		case 6:
		    res=a>>b;
			printf("Right shift result=%d",res);
			break;
		default:
			printf("Invalid choice");
	}
	return 0;
}