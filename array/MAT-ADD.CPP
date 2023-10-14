#include<stdio.h>
#include<conio.h>
void main()
{
  int row,clm,a[10][10],b[10][10],i,j;
  clrscr();
  printf("Enter the Row Size= ");
  scanf("%d",&row);
  printf("\nEnter the Column Size= ");
  scanf("%d",&clm);
  printf("\nEnter %d elements in 1st Matrix =\n",row*clm);
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      scanf("%d",&a[i][j]);
  }
  printf("\nEnter %d elements in 2nd Matrix =\n",row*clm);
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      scanf("%d",&b[i][j]);
  }
  printf("\n Original 1st Matrix\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      printf("\t%d",a[i][j]);
    printf("\n");
  }
  printf("\n Original 2nd Matrix\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      printf("\t%d",b[i][j]);
    printf("\n");
  }
  printf("\nAfter Addition of two Matrix\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      printf("\t%d",a[i][j]+b[i][j]);
    printf("\n");
  }
  getch();
}
