#include<stdio.h>
#include<conio.h>
int main()
{
	int n,x,count=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	while(n)
	{
		x=n&1;
		if(x==1)
		{
			printf("Position of first 1 in LSB is %d",count);
			break;
		}
		else
		{
			n=n>>1;
			count++;
		}
	}
	getch();
}
