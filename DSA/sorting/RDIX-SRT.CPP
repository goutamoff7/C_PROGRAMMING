#include<stdio.h>
#include<conio.h>
void main()
{
  int ar[10],mat[20][10],i,j,n,p,pass,large=0;
  clrscr();
  printf("Enter the size of Array= ");
  scanf("%d",&n);
  printf("\nEnter elements=\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
    if(large<ar[i])
      large=ar[i];
  }
for(pass=1;(large/pass)>0;pass*=10)
{
  for(i=0;i<n;i++)
  for(j=0;j<10;j++)
    mat[i][j]=0;
  for(i=0;i<n;i++)
      mat[i][(ar[i]/pass)%10]=ar[i];
  p=0;
  for(j=0;j<10;j++)
  {
    for(i=0;i<n;i++)
    {
      if(mat[i][j]!=0)
	ar[p++]= mat[i][j];
    }
  }
}
  printf("Sorted Array\n");
  for(i=0;i<n;i++)
    printf("%d ",ar[i]);
  getch();
}