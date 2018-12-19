#include<stdio.h>
char ch='y';
int main()
{
	void play(int gol);
	int num;
	scanf("%d",&num);
	if((num == 7)||(num == 11))
	{
		printf("Win\n");
		printf("Play again?\n");
		getchar();
		ch=getchar();
		if((ch = 'y')||((ch = 'Y')))
		{
			play(num);
		}
	}
	else if((num == 2)||(num == 3)||(num == 12))
	{
		printf("Lose\n");
		printf("Play again?\n");
		getchar();
		ch=getchar();
		if((ch = 'y')||((ch = 'Y')))
		{
			main();
		}
	}
	else
	{
		play(num);
	}
	return 0;
}
void play(int gol)
{
	int po;
	scanf("%d",&po);
	if(po == gol)
	{
		printf("Win\n");
		printf("Play again?\n");
		getchar();
		ch=getchar();
		if((ch = 'y')||((ch = 'Y')))
		{
			play(po);
		}
		
	}
	else if(po == 7)
	{
		printf("Lose\n");
		printf("Play again?\n");
		if((ch = 'y')||((ch = 'Y')))
		{
			main();
		}
	}
}
