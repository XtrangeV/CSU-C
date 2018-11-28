#include<stdio.h>
#include<stdlib.h>
#define N 20
#define HO system("\npause");
int main()
{
	char cn[N];
	scanf("%s",cn);
	for(int i=0;i<N&&cn[i]!='\0';i++)
	{
		printf("%d ",cn[i]-48);
	}
	HO
	return 0;
}
