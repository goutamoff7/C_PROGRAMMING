#include<stdio.h>
#include<conio.h>
void main()
{
  int al,bl,cl,a[10],b[10],c[20],i,j,k;
  clrscr();
  printf("Enter the size of 1st Array= ");
  scanf("%d",&al);
  printf("\nEnter the size of 2nd Array= ");
  scanf("%d",&bl);
  cl=al+bl;
  printf("\nEnter %d elements in 1st Array in Ascending Order  =\n",al);
  for(i=0;i<al;i++)
    scanf("%d",&a[i]);
  printf("\nEnter %d elements in 2nd Array in Ascending Order =\n",bl);
  for(j=0;j<bl;j++)
    scanf("%d",&b[j]);
  i=0;j=0;k=0;
  while(i<al && j<bl)
  {
    if(a[i]>b[j])
      c[k++]=b[j++];
    else
      c[k++]=a[i++];
  }
  if(j==bl)
  {
    for(;i<al;i++)
      c[k++]=a[i];
  }
  else
  {
    for(;j<bl;j++)
      c[k++]=b[j];
  }
  printf("Final sorted elements :");
  for(i=0;i<cl;i++)
  printf("%d ",c[i]);
  getch();
}
