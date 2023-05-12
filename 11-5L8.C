#include<stdio.h>
#include<conio.h>
void main()
{
	int sum,i,n;
	clrscr();
	sum=0;
	i=1;
	printf("Enter the value of N:-");
	scanf("%d",&n);
	do{
		printf("the sum of Numbers 1 to N=%d\n",sum);
		sum+=i;
		i++;
	  }while(i<=n);
	  getch();
}