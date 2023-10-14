#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i,j=0,k,flag=1;
  char str1[50],srch[25],str2[25];
  clrscr();
  printf("Enter the String :");
  gets(str1);
  n=strlen(str1);
  printf("Enter the Searching Word :");
  gets(srch);
  str1[n]=' ';
  for(i=0;i<=n;i++)
  {
    if(str1[i]!=' ')
    {
       str2[j]=str1[i];
       j++;
    }
    else
    {
      str2[j]='\0';
      flag=strcmp(str2,srch);
      if(flag==0)
      {
	printf("Yes");
	break;
      }
      else
      {
	str2[0]='\0';
	j=0;
      }
    }
  }
  if(flag!=0)
    printf("NO");
  getch();
}

