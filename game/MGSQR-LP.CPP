#include<stdio.h>
#include<conio.h>
int ar[20][20];
void main()
{
  int n,i,j,value=1;
  clrscr();
  printf("Enter the range: ");
  scanf("%d",&n);
  i=n/2;j=n-1;
  while(value<=n*n)
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
    i=i-1;j=j+1;value++;
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      printf("%d\t",ar[i][j]);
    printf("\n\n");
  }
  getch();
}