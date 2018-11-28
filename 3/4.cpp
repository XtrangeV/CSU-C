#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5][5];
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int sumrow=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			sumrow+=arr[i][j];
		}
		printf("%d ",sumrow);
		sumrow=0;
	}
	printf("\n");
	int sumline=0;
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			sumline+=arr[j][i];
		}
		printf("%d ",sumline);
		sumline=0;
	}
	return 0;
}
