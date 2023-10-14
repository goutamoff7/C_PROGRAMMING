#include<stdio.h>
#include<conio.h>
void main()
  {
    int n,p=1;
    clrscr();
    printf("Enter the Number For Factorial=");
    scanf("%d",&n);
    while(n!=0)
      {
	p=p*n;
	n=n-1;
      }
      printf("The Factorial of the Given Number= %d",p);
      getch();
  }
