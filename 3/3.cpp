#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int num;
	char arr[20],tem[20];
	scanf("%d",&num);
	int n=num,len=0;
	while(n)
	{
		n/=10;
		len++;
	}
	n=num;
	for(int i=0;i<len;i++)
	{
		arr[i]=(n%10)+48;
		n/=10;
	}
	
	int i=0;
	strcpy(tem,arr);
	for(int i=0;i<len;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[i] == tem[j])
			{
				printf("%c",arr[i]);
			}
		}
	}
	
	return 0;
}
