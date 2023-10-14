/*Add the Numbers till the user input Zero (0)*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int n,s=0;
    clrscr();
    do
      {
	printf("Enter the Number=");
	scanf("%d",&n);
	s=s+n;
      }while(n!=0);
       printf("The Sum of the Numbers = %d",s);
       getch();
  }

