#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int i=0,j,k,flag=0;
  char str[60];
  clrscr();
  printf("Enter the string: ");
  gets(str);
  while(str[i]!=NULL)
  {
    j=i;k=i+5;
    while(j<k)
    {
      if(str[j]!=str[k])
      {
	flag=1;
	break;
      }
      else
      {
	j++;
	k--;
      }
    }
    if(flag==1)
      break;
    else
      i+=6;
  }
  if(flag==0)
    printf("The String is Colindrome");
  else
    printf("The String is not Colindrome");
  getch();
}


