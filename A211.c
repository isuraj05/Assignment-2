#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,x;
	printf("Enter a number and a digit: ");
	scanf("%d%d",&m,&n);
	x=m*10+n;
	printf("%d",x);
	getch();
}
