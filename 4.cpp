#include<stdio.h>
int main()
{
	char *eng[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
	int num;
	while(scanf("%d",&num))
	{
		switch(num)
		{
			case 0:printf("%s\n",*eng);
			break;
			case 1:printf("%s\n",*(eng+1));
			break;
			case 2:printf("%s\n",*(eng+2));
			break;
			case 3:printf("%s\n",*(eng+3));
			break;
			case 4:printf("%s\n",*(eng+4));
			break;
			case 5:printf("%s\n",*(eng+5));
			break;
			case 6:printf("%s\n",*(eng+6));
			break;
			case 7:printf("%s\n",*(eng+7));
			break;
			case 8:printf("%s\n",*(eng+8));
			break;
			case 9:printf("%s\n",*(eng+9));
			break;
			default:return 0;
		}
	}
	return 0;
}
