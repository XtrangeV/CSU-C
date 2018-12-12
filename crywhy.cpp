#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int sum=0,j=0;
	do
	{
		sum+=num%10;
		num/=10;
		j++;
	}while(num);
	printf("%d",j);
	int *arr = (int *)malloc(sizeof(int)*j);
	return 0;
}

