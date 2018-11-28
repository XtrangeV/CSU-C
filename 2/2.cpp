#include<stdio.h>
int main()
{
	double ormon;
	scanf("%lf",&ormon);
	if(ormon <=750)
	{
		printf("%.2lf",0.01*ormon);
	}
	else if(ormon <= 2250 && ormon > 750)
	{
		printf("%.2lf",7.5+(ormon-750)*0.02);
	}
	else if (ormon <= 3750 && ormon > 2250)
	{
		printf("%.2lf",37.5+(ormon-2250)*0.03);
	}
	else if (ormon <= 5250 && ormon > 3750)
	{
		printf("%.2lf",82.5+(ormon-3750)*0.04);
	}
	else if (ormon <= 7000 && ormon > 5250)
	{
		printf("%.2lf",142.5+(ormon-5250)*0.05);
	}
	else if (ormon > 7000)
	{
		printf("%.2lf",230+(ormon-7000)*0.06);
	}
	return 0;
}
