#include<stdio.h>
#include<conio.h>
void main()
{
	int a=1,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		printf("%d\n",a);
		a+=2;
	  }while(a<=n);
	getch();
}