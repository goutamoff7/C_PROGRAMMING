#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  clrscr();
  printf("Enter the Range= ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
     {
	for(j=1;j<=i;j++)
	   {
	     if(j==1||i==n||j==i)
		printf("*");
	     else
		printf(" ");
	   }
	printf("\n");
     }
  getch();
}

