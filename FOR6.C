#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	for(a=2000,b=3000;a<=b;a+=4)
	{
		printf("leap year from 2000 to 3000=%d\n",a,b);
	}
	getch();
}
