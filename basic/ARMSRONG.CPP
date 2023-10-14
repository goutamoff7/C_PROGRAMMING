#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<iostream.h>
void main()
{
  int x,y,cnt,sum=0;
  clrscr();
  cnt=0;
  cout<<"Enter the Number=";
  cin>>x;
  y=x;
  while(x>0)
  {
    cnt=x%10;
    sum=sum+pow(cnt,3);
    x=x/10;
  }
  if(sum==y)
  {
    cout<<"The Number is Armsrong";
  }
    else
    cout<<" The Number is not Armstrong";
    getch();
  }


