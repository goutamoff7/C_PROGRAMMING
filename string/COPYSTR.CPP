#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i;
  char ar1[20],ar2[20];
  clrscr();
  printf("Enter the string :");
  gets(ar1);
  n=strlen(ar1);
  for(i=0;i<n;i++)
    ar2[i]=ar1[i];
  for(i=0;i<n;i++)
    printf("%c",ar2[i]);
    getch();
}
