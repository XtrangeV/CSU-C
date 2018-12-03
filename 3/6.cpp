#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n;
int main()
{
	void ji(int **sqr);
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
			printf("%4d",sqr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
void ji(int **sqr)
{
	int y=n/2,x=0,cnt=1;
	while(cnt<=n*n)
	{
		sqr[x][y] = cnt++;
		x--;
		y++;
		if(x == -1)
		{
			x=n-1;
		}
		if(y == n)
		{
			y=0;
		}
		if(sqr[x][y])
		{
			x++;
			if(x == n)
			{
				x=0;
			}
		}
			
	}
}
