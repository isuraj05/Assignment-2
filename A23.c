#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping the values of the two variables: %d %d",a,b);
	getch();
}
