#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n;
  printf("Enter The Range= ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    for(j=0;j<=i;j++)
      printf("%d",j);
    printf("\n");
  }
  gech();
}


