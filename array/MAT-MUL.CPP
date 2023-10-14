#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,l,ar1[10][10],ar2[10][10],ar3[10][10],sum=0,n;
  clrscr();
  printf("Enter the Size of matrixes : ");
  scanf("%d",&n);
  printf("Enter Values in Matrix 1 :\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&ar1[i][j]);
   printf("Enter Values in Matrix 2 :\n");
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      scanf("%d",&ar2[i][j]);
  for(i=0;i<n;i++)
  {
    for(l=0;l<n;l++)
    {
      for(j=0;j<n;j++)
	sum=sum+ar1[i][j]*ar2[j][l];
      ar3[i][l]=sum;
      sum=0;
    }
  }
  printf("After multiplication of Two Matrix\n");
  for(i=0;i<n;i++)
  {
    for(l=0;l<n;l++)
      printf("%d\t",ar3[i][l]);
    printf("\n");
  }
  getch();
}



