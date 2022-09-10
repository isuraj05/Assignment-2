#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Unit digit of the given number is %d",n%10);
	getch();
}
