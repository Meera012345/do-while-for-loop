#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n--;
	  }while(n>=1);
	getch();
}
