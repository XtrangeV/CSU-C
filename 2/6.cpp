#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	do
	{
		printf("%d",num%10);
		num/=10;
	}while(num);
	return 0;
}
