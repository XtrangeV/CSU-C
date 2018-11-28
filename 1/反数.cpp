#include<stdio.h>
int main()
{
	int a;
	printf("Enter a two-digital number:");
	scanf("%d",&a);
	printf("The revesal is : %d%d",a%10,a/10);
	return 0;
}
