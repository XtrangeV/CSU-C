#include<stdio.h>
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
	int sumline = 0,sumxline = 0;
	for(int i=0;i<5;i++)
	{
		int j;
		sumline =0;
		for(j=0;j<5;j++)
		{
			sumxline += arr[j][i];
			sumline += arr[i][j];
		}
		printf("%d-:%d\n",sumline,sumxline);
		sumxline = 0;
	}
	return 0;
}
