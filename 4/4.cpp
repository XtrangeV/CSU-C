#include<stdio.h>
#include<queue>
#define N 50
int main()
{
	char sign[N];// SIG 47
	int flag;
	int ans[N/2]={0};
	std::queue<int> num;
	std::queue<char> slist;
	for(int i=0;i<N;i++)
	{
		scanf("%c",sign[i]);
	}
	for(int i=0;i<N;i++)
	{
		if(sign[i] < 48)
		{
			flag=i;
			break;
		}
	}
	int i=0;
	while(!num.empty())
	{
		switch(slist.front())
		{
			case '*': ans[i] = num.pop()*(num.pop());
			break;
			case '/': ans[i] = num.pop()/num.pop();
			break;
			case '-': ans[i] = num.pop()-num.pop();
			break;
			case '+': ans[i] = num.pop()+num.pop();
			break;
		}
		i++;
	}
	for(int i=0;i<N/2;i++)
	{
		ans[0]+=ans[i];
	}
	printf("%d",ans[0]);
	return 0;
}
