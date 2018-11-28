#include<stdio.h>
int main()
{
	int input;
	printf("Enter a dollar amount:");
	scanf("%d",&input);
	printf("20 bills:%d\n10 bills:%d\n5 bills:%d\n1 bills:%d",input / 20, (input % 20) / 10, ((input % 20) % 10) / 5, (((input % 20) % 10) % 5));
	return 0;
}
