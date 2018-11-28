#include<stdio.h>
int main()
{
	int item,d,m,y;
	double price;
	printf("Enter item number:");
	scanf("%d",&item);
	printf("Enter unit price:");
	scanf("%lf",&price);
	printf("Enter purchase date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&d,&m,&y);
	printf("Item\tUnit\tPurchase\n");
	printf("\tPrice\tDate\n");
	printf("%d\t%.2lf\t%d/%d/%d",item,price,d,y,m);
	return 0;
}
