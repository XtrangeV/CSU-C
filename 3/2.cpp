#include<stdio.h>
#include<math.h>
int main(void)
{
    double x;
    double aha(double x);
    scanf("%lf",&x);
    printf("Square root:%lf",aha(x));
    return 0;
}
double aha(double x)
{
	double head =1,f=0;
	if(x == 0)
	{return 0;}
	while(head != f)
	{
		f=head;
		head = (head + x /head) /2 ;
	}
	return (head);
}
