#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i,j,n;
  char ar[20];
  clrscr();
  printf("Enter the String :");
  gets(ar);
  n=strlen(ar);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-i;j++)
      printf("%c",ar[j]);
    printf("\n");
  }
  getch();
}

