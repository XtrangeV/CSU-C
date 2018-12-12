#include<stdio.h>
#define SIZE 5001
int check[SIZE] = { 0 };
int primelist[SIZE] = { 0 };
int pos = 0,sum=0;
int main() 
{
	void print(int *arr,int len);						//void print(int *arr,int len)
	bool cry(int num);									//{
	bool piu(int num);									//	printf("%d ",*(arr+i));
	bool eve(int num);									//}
	bool yes();											//printf("\n");
	for (int i = 2; i < SIZE; ++i)					//}
	{
		if (!check[i])
		{
			primelist[pos++] = i;
		}
		for (int j = 0; j < pos&&i*primelist[j] < SIZE; j++)
		{
			check[i*primelist[j]] = 1;
		}
	}
	yes();									//print(primelist,pos);
	return 0;
}
bool yes()
{
	bool eve(int num);
	bool cry(int num);
	for(int i=0;i<pos;i++)
	{
		if((eve(*(primelist+i)))&&cry(sum))
		{
			printf("%d ",*(primelist+i));
		}
	}
}
bool eve(int num)
{
	bool piu(int num);
	int len=0,ha=0;
	int sad=num;
	do
	{
		sum+=num%10;
		if(piu(num%10))
		{
			ha++;
		}
		len++;
		num/=10;
	}while(num);
	return (ha==len)?1:0;
}
bool piu(int num)
{
	return ((num == 2)||(num==3)||(num==5)||(num ==7))?1:0; 
}
bool cry(int num)
{
	for(int i=0;i<32;i++)
	{
		if(*(primelist+i) == num)
		{
			return 1;
		}
	}
}
