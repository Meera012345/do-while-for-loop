#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1,n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		printf("%d*%d=%i\n",i,n,n*i);
		i++;
	  }while(i<=n);
	getch();
}