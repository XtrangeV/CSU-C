#include<stdio.h>
int main()
{
	int a,b,c,d;
	char s;
	printf("Enter two fractions separated by a plus sign:");
	scanf("%d/%d%c%d/%d",&a,&b,&s,&c,&d);
	switch(s)
	{
		case '+':printf("%d/%d",a*d+b*c,b*d);
		break;
		case '-':printf("%d/%d",a*d-b*c,b*d);
		break;
		case '*':printf("%d/%d",a*c,b*d);
		break;
		case '/':printf("%d/%d",a*d,b*c);
		break;
	}
	return 0;
}

