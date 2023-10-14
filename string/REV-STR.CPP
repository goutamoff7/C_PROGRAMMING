#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i;
  char ar[20];
  clrscr();
  printf("Enter the string: ");
  gets(ar);
  n=strlen(ar);
  for(i=n-1;i>=0;i--)
    printf("%c",ar[i]);
  getch();
}