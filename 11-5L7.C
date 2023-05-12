#include<stdio.h>
#include<conio.h>
void main()
{
	int a=2000,b=3000;
	clrscr();
	do{
		printf("Leap year from 2000 to 3000=%d\n",a,b);
		a+=4;
	  }while(a<=b);
	getch();
}