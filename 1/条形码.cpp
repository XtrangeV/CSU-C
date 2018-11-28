#include<stdio.h>
int main()
{
	char code[11];
	int a[11],ssum=0,dsum=0,sum=0;
	for(int i=0;i<11;i++)
	{
		scanf("%c",&code[i]);
	}
	for(int i=0;i<11;i++)
	{
		a[i] = code[i] - 48;
	}
	for(int i=0,j=1;i<12,j<12;i+=2,j+=2)
	{
		ssum+=a[i];
		dsum+=a[j];
	}
	sum = 9 - (((3*ssum +dsum)-1) % 10);
	printf("Check digital:%d",sum);
	return 0;
}
