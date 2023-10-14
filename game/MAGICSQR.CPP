#include<stdio.h>
#include<conio.h>
void mgcsqr(int,int,int,int);
int ar[20][20];
void main()
{
  int n,i,j;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  mgcsqr(1,n,n/2,n-1);
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      printf("%d\t",ar[i][j]);
    printf("\n\n");
  }
  getch();
}
void mgcsqr(int value,int n,int i,int j)
{
  if(value<n*n+1)
  {
    if(i==-1 && j==n) //both are out of bound
    {
      i=0;j=n-2;
    }
    else if(i==-1) //i out of bound
      i=n-1;
    else if(j==n) //j out of bound
      j=0;
    if(ar[i][j]>0) //occupied
    {
      i=i+1;j=j-2;
    }
    ar[i][j]=value;
    mgcsqr(value+1,n,i-1,j+1);
  }
}

