#include<stdio.h>
int main()
{
	double mon,dt,pay;
	char *num[] = {"first","second","third"};
	printf("Enter amount of loan:");
	scanf("%lf",&mon);
	printf("Enter interest rate:");
	scanf("%lf",&dt);
	printf("Enter monthly payment:");
	scanf("%lf",&pay);
	for (int i =0;i<3;i++)
	{
		printf("Balance remaining after %s payment:%.2lf\n",num[i],mon*(1+dt/1200)-pay);
		mon = mon*(1+dt/1200)-pay;
	}
	return 0;
}

