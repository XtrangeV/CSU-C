#include<cstdio>
#include<iostream>
#include<stack>
#include<queue>
#define N 20
#define HO printf("\n");system("pause");
using namespace std;
int main()
{
	int StringToNum(char * str);
	int isC(char *str);
	int isNum(char *str);
	queue<double> numque;
	stack<char> signstk;
	char input[N][N];
	int inputlen=0;
	for (int i = 0; i < N; i++)
	{
		cin >> input[i];
		if (getchar() == '\n')
		{
			inputlen = i+1;
			break;
		}
	}
	for (int i = 0; i < inputlen; i++)
	{
		if (isC(input[i]))
		{
			signstk.push(input[i][0]);
			
		}
		else if (isNum(input[i]))
		{
			numque.push(StringToNum(input[i]));
		}
	}
	double ans=0;
	ans = numque.front();
	while (signstk.size())
	{
		numque.pop();
		if (signstk.top() == '+')
		{
			ans += numque.front();
		}

		else if (signstk.top() == '-')
		{
			ans -= numque.front();
		}

		else if (signstk.top() == '*')
		{
			ans *= numque.front();
		}

		else if (signstk.top() == '/')
		{
			ans /= numque.front();
		}
		signstk.pop();
	}
	printf("%.3lf", ans);
	HO
	return 0;
}
int StringToNum(char *str)
{
	int len = strlen(str);
	int num = 0,j=0;
	for (int i = len - 1; i != -1 && str[i] != '-'; i--,j++)
	{
		num += ((str[i] - 48)*pow(10, j));
	}
	if (str[0] == '-')
	{
		return num*-1;
	}
	else
	{
		return num;
	}
}
int isC(char *str)
{
	if( ( (str[0]=='+')|| (str[0] == '-')|| (str[0] == '*')|| (str[0] == '/')) && (strlen(str) == 1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int isNum(char *str)
{
	if ((str[1] > 47 && str[1] < 58) || (str[0] > 47 && str[0] < 58))
	{
		if (str[0] == '-')
		{	
			return -1;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}