#include<stdio.h>
#include<stdlib.h>
#define N 50
#define HO system("\npause");
int main()
{
	char haha[N][N];
	bool biu=0;
	int i=0,q;
	while(1)
	{
		for(i=0;i<N;i++)
		{
			scanf("%s",haha[i]);
			if(*(haha[i])  == '!' || *(haha[i])  == '.' || *(haha[i])  == '?')
			{
				q=i;
				for(i=q-1;i>-1;i--)
				{
					if(biu)
					{
						printf(" ");
					}
					printf("%s",haha[i]);
					biu=1;
				}
				printf("\n");
			}
		}
	}
	HO
	return 0;
}
