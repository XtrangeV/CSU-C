#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string>
int main()
{
	int n;
	const string *list[] = {
					"1-��ͼ����","2-������","3-��ά��","4-������","5-�����","6-֣���",
					"7-���ĺ�","8-������","9-���","10-Ĳ��","11-л����","12-�¾���",
					"13-��ΰ��","14-��ȽȽ","15-ʱ����","16-������","17-������","18-�˫hͮ",
					"19-���","20-������","21-��Խ��","22-���[��","23-��˹��","24-����ǿ",
					"25-��ʤ��","26-κ����","27-������","28-�첩��","29-������"
					}; 
	int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29};
	
	srand(time(NULL));
	while(scanf("%d",&n))
	{
		printf("------------------------------------------------------------\n");
		while(n)
		{
			int r=arr[(rand()%29)+1];
			if(r)
			{
				printf("%s ",list[r]);
			}
			else
			{
				++n;
			}
			n--;
		}
		printf("\n------------------------------------------------------------\n\n");
	}
	return 0;
}
