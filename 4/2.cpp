#include<stdio.h>
int main()
{
	int x,n;
	long long p(int x,int n);
	printf("Input x n:\n");
	scanf("%d%d",&x,&n);
	printf("%d",p(x,n));
	return 0;
}
long long p(int x,int n)
{
	long long ago=1;
	if(x==0 || n==0)
	{
		return 1;
	}
	if(n==1)
	{
		return x;
	}
	else
	{
		return 	x*p(x,n-1);
	}
}
