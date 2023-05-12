#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,i,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	for(sum=0,i=1;i<=n;sum+=i;i++)
	{
		printf("sum of 1 to N=%d",sum);
	}
	getch();
}