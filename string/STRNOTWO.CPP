#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i,j=0,flag=1,count=0;
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
       str2[j++]=str1[i];
    else
    {
      str2[j]='\0';
      flag=strcmp(str2,srch);
      if(flag==0)
	count++;
	str2[0]='\0';
	j=0;
    }
  }
  if(count==0)
    printf("Searched word is not found in the string");
  else
    printf("The Searched Word present %d times in the String",count);
  getch();
}

