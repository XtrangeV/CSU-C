#include<stdio.h>
int main()
{
	int num[4];
	int min(int *num,int n);
	int max(int *num,int n);
	for(int i=0;i<4;i++)
	{
		scanf("%d",(num+i));
	}
	printf("Largest :%d\nSmallest :%d",max(num,4),min(num,4));
	return 0;
}
int max(int *num,int n)
{
	int max = *(num);
	for (int i=0;i<n;i++)
	{
		if (*(num+i) > max)
		{
			max = *(num+i);
		}
	}
	return max;
}
int min(int *num,int n)
{
	int min = *(num);
	for (int i=0;i<n;i++)
	{
		if (*(num+i) < min)
		{
			min = *(num+i);
		}
	}
	return min;
}
