#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 50
char _[2][N];
int main()
{
	void __(char *_______,char *________,int ___);
	for(int ____=0;____<2;____++)
	{
		scanf("%s",_[____]);
	}
	int ___ = strlen(*_);
	if(!(strlen(*_)-strlen(*(_+1))))
	{
		__(*_,*(_+1),___);
	}
	else
	{
		printf("No");
	}
	system("\npause");
	return 0;
}
void __(char *_______,char *________,int ___)
{
	int _____[26]={0};
	for(int ____=0;____<___;____++)
	{
		++_____[_______[____]-'a'];
		--_____[________[____]-'a'];
	}
	int ____=25,______;
	while(____)
	{
		if(!(_____[____]))
		{
			______=0;
		}
		else
		{
			______=1;
			break;
		}
		____--;
	}
	if(______)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}
}
