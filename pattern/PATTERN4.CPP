#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,k;
  clrscr();
  printf("Enter he Range of Pattern=");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i-1;j++)
      printf(" ");
      for(k=0;k<=i;k++)
	printf("*");
    printf("\n");
  }
  getch();
}
