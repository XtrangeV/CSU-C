#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i, j, n;
	void line(int n);
	int arr[29] = { 0 };
	srand(time(NULL));
	printf("只需要输入要挑选的小可爱人数就好了\n\n");
	while (scanf_s("%d", &n) && n < 30 && n > 0 )
	{
		line(n);
		printf("\n");
		const char *list[] =
		{
			"1-匡图上青","2-罗龙光","3-马维剑","4-王若冰","5-杨锦涛","6-郑文韬",
			"7-邹文浩","8-冯月阳","9-李俊俏","10-牟旭","11-谢欣奕","12-陈均奕",
			"13-赖伟超","14-申冉冉","15-时霁冰","16-杨泽南","17-胡金琦 ","18-潘玥彤",
			"19-徐杰","20-张玉奇","21-张越棋","22-安璠娟 ","23-杜斯博","24-凌自强",
			"25-舒胜军","26-魏治亮","27-马正东","28-朱博文","29-张文婷"
		};
		int r = 0;
		for (int i = 0; i < n; i++)
		{
		s:r = rand() % 29;
			for (int j = 0; j < i; j++)
			{
				if (arr[j] == r)
				{
					goto s;
				}
			}
			arr[i] = r;
		}
		for (int i = 0; i < n; i++)
		{
			printf("%s  ",*(list+*(arr+i)));
		}
		printf("\n");
		line(n);
		printf("\n\n");
	}
	return 0;
}

void line(int n)
{
	while (n*10)
	{
		printf("------------");
		n--;
	}
}