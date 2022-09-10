#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,n,sum;
	printf("Enter a three digit number: ");
	scanf("%d",&n);
	a=n%10;
	b=n/10;
	c=b%10;
	d=b/10;
	sum=a+c+d;
	printf("Sum of the digits of the given number is %d",sum);
	getch();
}
