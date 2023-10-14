#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i,j;
  char str[50];
  clrscr();
  printf("Enter the string =");
  gets(str);
  n=strlen(str);
  for(i=0;i<n;i++)
  {
    for(j=i;j<n;j++)
      printf("%c ",str[j]);
    for(j=0;j<i;j++)
      printf("%c ",str[j]);
    printf("\n");
  }
  getch();
}

