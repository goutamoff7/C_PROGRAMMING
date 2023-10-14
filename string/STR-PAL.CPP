#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int m,n,i,flag=1;
  char str[20];
  clrscr();
  printf("Enter the string: ");
  gets(str);
  n=strlen(str);
  m=n;
  for(i=0;i<m/2;i++)
  {
     if(str[i]!=str[n-1])
     {
       flag=0;
       break;
     }
     else
       n--;
  }
   if(flag==1)
     printf("The String is Palindrome");
   else
     printf("The String is Not Palindrome");
  getch();
}