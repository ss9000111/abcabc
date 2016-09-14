
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int in_put, flag =1;
	while(flag == 1){
	printf("please enter function number you want to use\n 1: Factorial of a number\n 2:Leap year or not\n 3:Maximum\n 4:Division of two numbers\n 5:Exit");
	fflush(stdout);
	scanf("%d",&in_put);
	switch(in_put)
	{
	case 1:
	{
unsigned short a;
unsigned long b=1;
int i;
	printf("\nEnter your number smaller or equals to 20(64 bits)for factorial:");
	fflush(stdout);
	scanf("%u",&a);
	while(a>20)
	{	printf("\n number is too big please re-enter:\n");
	fflush(stdout);
		scanf("%u",&a);
	}
		for(i=1;i<=a;i++)
		{
			b*=(unsigned long)i;
		}
		printf("\n the factorial of %u is %lu",a,b);
		break;
	}
	case 2:{
unsigned int year;
printf("\n Please enter the year you want to see whether leap year or not:\n");
fflush(stdout);
	scanf("%u",&year);
if (year%4 ==0)
{
	if (year %100 ==0)
	{
		if (year %400 ==0)
		{
		printf("\n The year of %u is a leap year\n",year);
		fflush(stdout);
		}
		else
		{
		printf("\n The year of %u is not a leap year\n",year);
		fflush(stdout);
		}
	}
	else
	{
	printf("\n The year of %u is a leap year\n",year);
	fflush(stdout);
	}
}
else
{
 printf ("\n The year of %u is not a leap year\n",year);
 fflush(stdout);
}
break;
}
	case 3:
	{
float num1,num2;
printf("\n Please enter the first number:\n");
fflush(stdout);
scanf("%f",&num1);
printf("\n Please enter the second number:\n");
fflush(stdout);
scanf("%f",&num2);
(num1>num2)?printf("\n larger!"):printf("\n smaller!!");
		break;
	}
	case 4:{
int numb1,numb2;
float output;
printf("\n Please enter the first number:\n");
fflush(stdout);
scanf("%d",&numb1);
printf("\n Please enter the second number:\n");
fflush(stdout);
scanf("%d",&numb2);
output = (float)numb1/numb2;
printf("out put is %f\n",output);
		break;}
	case 5:{
		flag =0;
		break;}
	default:
	{
		printf("\nWARNING!!!!!Please enter number 1 to 5\n");
		break;
	}
	}
	}
	return 0;
}
