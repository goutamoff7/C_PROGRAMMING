#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i;
  char ar[20];
  clrscr();
  printf("Enter the string :");
  gets(ar);
  n=strlen(ar);
  for(i=0;i<n;i++)
  {
    if(ar[i]!=' '&& ar[i]>='a'&& ar[i]<='z')
       ar[i]=ar[i]-32;
  }
  printf("%s",ar);
  getch();
}
