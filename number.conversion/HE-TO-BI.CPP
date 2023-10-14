#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
long int htd(char[],long int);
void dtb(long int);
void main()
{
  char str[50];
  long int n,i,d;
  clrscr();
  printf("Enter Hexadecimal number to convert into Binary =");
  gets(str);
  n=strlen(str);
  d=htd(str,n);
  dtb(d);
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
void dtb(long int n)
{
  if(n==0)
    return;
  else
  dtb(n/2);
  printf("%ld",n%2);
}