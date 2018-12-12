#include<stdio.h>
#include<iostream>
#define LEN 60 
#define HE 3
#define DT 4
int dignum[10][9] =
{
{ 0,1,0,1,0,1,1,1,1 },
{ 0,0,0,0,0,1,0,0,1 },
{ 0,1,0,0,1,1,1,1,0 },
{ 0,1,0,0,1,1,0,1,1 },
{ 0,0,0,1,1,1,0,0,1 },
{ 0,1,0,1,1,0,0,1,1 },
{ 0,1,0,1,1,0,1,1,1 },
{ 0,1,0,0,0,1,0,0,1 },
{ 0,1,0,1,1,1,1,1,1 },
{ 0,1,0,1,1,1,0,1,1 }
};

char dig[] = 
{
	' ','_',' ',
	'|','_','|',
	'|','_','|'
};
int dt = 0, ind = 0;
char paper[HE][LEN];
char input[15];
int main()
{
	void draw(int num);
	//std::cin >> input;
	scanf("%s",input);	 //emmmmmm如果你是VS就把这行注释掉吧并不是scanf_s的问题 
	for (int i = 0; input[i]!='\0'; i++)
	{
		draw(input[i] - 48);
	}
	for (int i = 0; i < HE; i++)
	{
		for (int j = 0; j < LEN; j++)
		{
			printf("%c",paper[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	system("pause");
	return 0;
}
void draw(int num)
{
		for (int i = 0; i < HE; i++)
		{
			for (int j = 0+dt; j < 3 + dt; j++)
			{
				if (dignum[num][ind])
				{
					paper[i][j] = dig[ind];
				}
				else
				{
					paper[i][j] = ' ';
				}
				ind++;
			}
		}
		ind = 0;
		dt += DT;
}
