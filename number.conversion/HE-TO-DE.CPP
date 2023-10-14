#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
long int htd(char[],long int);
void main()
{
  char str[50];
  long int n,i;
  clrscr();
  printf("Enter Hexadecimal number to convert into Decimal =");
  gets(str);
  n=strlen(str);
  printf("%ld",htd(str,n));
  getch();
}
long int htd(char str[],long int n)
{
  long int i,sum=0,p,d;
  p=n-1;
  for(i=0;i<n;i++)
  {
    if(str[i]>47 && str[i]<58)
      d=str[i]-48;
    else if(str[i]>64 && str[i]<71)
      d=str[i]-55;
    else if(str[i]>96 && str[i]<103)
      d=str[i]-87;
    sum=sum+d*pow(16,p--);
  }
  return sum;
}
