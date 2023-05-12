#include<stdio.h>
#include<conio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	for(i=2;n>=i;n-=2)
	{
		printf("%d\t",n);
	}
	getch();
}