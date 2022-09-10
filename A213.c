#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,rot,n;
	printf("Enter a three digit number: ");
	scanf("%d",&n);
	a=n/10;
	b=n%10;
	rot=b*100+a;
	printf("After rotating the three digit number %d",rot);
	getch();
}
