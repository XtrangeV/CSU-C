#include<time.h>
#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i, j, n;
	void line(int n);
	int arr[29] = { 0 };
	srand(time(NULL));
	printf("ֻ��Ҫ����Ҫ��ѡ��С�ɰ������ͺ���\n\n");
	while (scanf_s("%d", &n) && n < 30 && n > 0 )
	{
		line(n);
		printf("\n");
		const char *list[] =
		{
			"1-��ͼ����","2-������","3-��ά��","4-������","5-�����","6-֣���",
			"7-���ĺ�","8-������","9-���","10-Ĳ��","11-л����","12-�¾���",
			"13-��ΰ��","14-��ȽȽ","15-ʱ����","16-������","17-������ ","18-�˫hͮ",
			"19-���","20-������","21-��Խ��","22-���[�� ","23-��˹��","24-����ǿ",
			"25-��ʤ��","26-κ����","27-������","28-�첩��","29-������"
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