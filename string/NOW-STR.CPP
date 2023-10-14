#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,sp=0,i;
  char ar[20];
  clrscr();
  printf("Enter the string: ");
  gets(ar);
  for(i=0;i<strlen(ar);i++)
  {
    if(ar[i]==' ')
    sp++;
  }
  printf("The Number of Words in the string = %d",sp+1);
  getch();
}

