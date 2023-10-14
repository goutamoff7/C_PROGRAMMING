#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i,j;
  char ar[20];
  clrscr();
  printf("Enter the Name: ");
  gets(ar);
  n=strlen(ar);
  for(i=0;i<=n;i++)
  {
    if(ar[i]==' '||ar[i]=='\0')
    {
      for(j=i-1;j>=0;j--)
	if(ar[j]==' ')
	  break;
	else
	  printf("%c",ar[j]);
      printf(" ");
    }
  }
  getch();
}
