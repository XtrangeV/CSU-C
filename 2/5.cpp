#include<stdio.h>
#include<conio.h>
int main()
{
	int gcd(int m,int n);
	int up,down;
	while(scanf("%d/%d",&up,&down))
	{
		printf("%d/%d\n",up/gcd(up,down),down/gcd(up,down));
	}
	_getch();
	return 0;
}
int gcd(int m,int n)
{
	return m ==0 ?n:gcd(n%m,m);
}
