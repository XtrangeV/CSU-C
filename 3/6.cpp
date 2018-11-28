#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
int main()
{
	void ji(int **sqr);
	void ou(int **sqr);
	scanf("%d",&n);
	int **sqr = (int **)malloc(sizeof(int)*n*n);
	for (int i = 0; i < n; i++)
	{
		sqr[i] = (int *)malloc(sizeof(int)*n);
		memset(sqr[i],0,sizeof(int)*n);
	}
		ji(sqr);
		for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",sqr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
void ji(int **sqr)
{
	int x=n/2,y=0,cnt=1;
	long int sum = (n*n*n+n)>>1; 
	while(cnt<sum+1)
	{
		sqr[y][x]=cnt;
		x++;
		y--;
		if(x==n)
		{
			x=0;
		}
		if(y<0)
		{
			y=n-1;
		}
		if(sqr[y][x])
		{
			y++;
			if(y==n)
			{
				y=0;
			}
			sqr[y][x]=cnt;
		}
		cnt++;
	}
	
}


/*
for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%d ",sqr[i][j]);
		}
		printf("\n");
	}
*/
