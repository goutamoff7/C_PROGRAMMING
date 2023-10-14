//Print all non-repeating character in a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char ar[50];
  int i,j,n,c=1;
  clrscr();
  printf("Enter the String: ");
  gets(ar);
  n=strlen(ar);
  printf("Non-Repeating Characters: \n");
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(ar[i]==ar[j] && ar[i]!=NULL && ar[i]!=' ')
      {
	c++;
	ar[j]=NULL;
      }
    }
    if(c==1 && ar[i]!=NULL && ar[i]!=' ')
    {
      printf("%c,",ar[i]);
    }
    c=1;
  }
  getch();
}

