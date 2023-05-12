#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n-=2;
	  }while(n>=a);
	getch();
}