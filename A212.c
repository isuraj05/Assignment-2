#include<stdio.h>
#include<conio.h>
int main()
{
	float inr,usd;
	printf("Enter an indian amount: ");
	scanf("%f",&inr);
	usd=inr/76.23;
	printf("USD is %f $",usd);
	getch();
}
