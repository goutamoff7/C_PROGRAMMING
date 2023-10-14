#include<stdio.h>
#include<conio.h>
void main()
{
  int row,clm,ar[10][10],i,j;
  clrscr();
  printf("Enter the Row Size= ");
  scanf("%d",&row);
  printf("\nEnter the Column Size= ");
  scanf("%d",&clm);
  printf("\nEnter %d elements in the Matrix =\n",row*clm);
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      scanf("%d",&ar[i][j]);
  }
  printf("\n Original Matrix\n");
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
      printf("\t%d",ar[i][j]);
    printf("\n");
  }
  printf("\nAfter Transpose of the Matrix\n");
  for(j=0;j<clm;j++)
  {
    for(i=0;i<row;i++)
      printf("\t%d",ar[i][j]);
    printf("\n");
  }
  getch();
}
