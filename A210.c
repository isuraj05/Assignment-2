#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x;
	printf("Enter a number: ");
	scanf("%d",&n);
	x=n/10;
	n=x*10;
	printf("%d",n);
	getch();
}
