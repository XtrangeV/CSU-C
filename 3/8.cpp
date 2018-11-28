#include<stdio.h>
#include<stdlib.h>
#define N 20
int main()
{
	bool first=1;
	int a[N],num;
	for(int i=0;i<N;i++)
	{
		a[i]=i;
	}
	scanf("%d",&num);
	for(int i=0;i<N;i++)
	{
		if(num<a[i]&&first)
		{
			printf("%d ",num);
			first=0;
		}
		printf("%d ",a[i]);
	}
	if(num>a[N-1])
		{
			printf("%d ",num);
		}
		system("pause");
	return 0;
}
