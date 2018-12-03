#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 50
char haha[2][N];
int main()
{
	void check(char *a,char *b,int lena);
	for(int i=0;i<2;i++)
	{
		scanf("%s",haha[i]);
	}
	int lena = strlen(*haha);
	if(!(strlen(*haha)-strlen(*(haha+1))))
	{
		check(*haha,*(haha+1),lena);
	}
	else
	{
		printf("No");
	}
	system("\npause");
	return 0;
}
void check(char *a,char *b,int lena)
{
	int englist0[26]={0};
	for(int i=0;i<lena;i++)
	{
		++englist0[a[i]-'a'];
		--englist0[b[i]-'a'];
	}
	int i=25,s;
	while(i)
	{
		if(!(englist0[i]))
		{
			s=0;
		}
		else
		{
			s=1;
			break;
		}
		i--;
	}
	if(s)
	{
		printf("No\n");
	}
	else
	{
		printf("Yes\n");
	}
}
