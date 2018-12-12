#include<stdio.h>
#define SIZE 5000
int check[SIZE]={0};
int primelist[SIZE]={0};
int main()
{
	bool find10(int num);
	int su(int num); 
	int pos=0;
	for(int i=2;i<SIZE;++i)
	{
		if(!check[i])
		{
			primelist[pos++]=i;
		}
		for(int j=0;j<pos&&i*primelist[j] < SIZE;j++)
		{
			check[i*primelist[j]] = 1;
		}
	}
	int x,sig;
	scanf("%d",&x);
	for(int i =0;i<SIZE;i++)
	{
		if(x == primelist[i])
		{
			sig=i;
			break;
		}
	}
	if(find10(*(primelist+sig))||find10(su(*(primelist+sig))))
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}

bool find10(int num)
{
	int pef=1;
	for(int i=0;i<10&&num>-1;i++)
	{
		
		{
			if(num%10==*(primelist+i))
			{
				pef=1;
			}
			else
			{
				pef=0;
				break;
			}
			num/=10;
		}
 	}	
	return pef;
}
int su(int num)
{
	int sum=0;
	do
	{
		sum+=num%10;
		num/=10;
	}while(num);
	return sum;
}
