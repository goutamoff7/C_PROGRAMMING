#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,n;
  clrscr();
  printf("Enter the Range= ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
     {
	for(j=1;j<i;j++)
	    printf(" ");
	for(k=j;k<=n;k++)
	   {
	     if(k==n||i==1||k==i)
		printf("*");
	     else
		printf(" ");
	   }
	printf("\n");
     }
  getch();
}

