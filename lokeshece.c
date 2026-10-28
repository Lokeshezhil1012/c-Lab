#include<stdio.h>
int main()
{
	int a,b,choice,res;
	printf("=====BRANCHING STATEMENTS=====\n");
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("\n------MENU-----\n");
	printf("1. check positive,negative or zero\n");
	printf("2. check Even or Odd\n");
	printf("3. Find Largest of two number\n");
	printf("4. check divisibility by 5\n");
	printf("\n Enter Your choice:");
	printf("%d\n-----RESULT-----\n");
	switch(choice)
	{
		case 1:
			if(a>0)
			{
				printf("%d is positive",a);
			}
			else if (a<0)
			{
				printf("%d is negative",a);
			}
			else
			{
				printf("%d is zero ",a);
			}
			break;
		case 2:
			if(a%2==0)
			{
				printf("%d id Even",a);
		    }
		    else
		    {
		    	printf("5d is Odd",a);
	     	}
			break;
		case 3:
			if(a>b)
			{
				res=a;
				printf("%d is the largest number",res);
			}
			else if(b>a)
			{
				res=b;
				printf("%d is the largest number",res);
		    }
			else
			{
				printf("Both number are equal");
		    }
		    break;
		case 4:
			if(a%5==0)
			{
				printf("%d is divisible by 5",a);
			}
			else
			{
				printf("%d is not Divisible by5",a);
			}
			break;
		default:
			{
				printf("Invalid choice:");
			}
	}
	return 0;
}