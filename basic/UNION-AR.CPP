#include<stdio.h>
#include<conio.h>
int insrt(int[],int,int[],int);
void main()
{
  int ar1[25],ar2[25],ar3[50],i,j,k=0,n1,n2;
  clrscr();
  printf("Enter the size of 1st Array= ");
  scanf("%d",&n1);
  printf("\nEnter the size of 2nd Array= ");
  scanf("%d",&n2);
  printf("\nEnter %d elements in 1st Array =\n",n1);
  for(i=0;i<n1;i++)
    scanf("%d",&ar1[i]);
  printf("\nEnter %d elements in 2nd Array =\n",n2);
  for(j=0;j<n2;j++)
    scanf("%d",&ar2[j]);
  k=insrt(ar1,n1,ar3,k);
  k=insrt(ar2,n2,ar3,k);
  for(i=0;i<k;i++)
    printf("%d-",ar3[i]);
  getch();
}
int insrt(int ar[],int n,int ar3[],int k)
{
  int i,j,swap,temp,flag=0;
  for(i=0;i<n;i++)
  {
    temp=ar[i];
    if(k==0)
      ar3[k++]=temp;
    else
    {
      for(j=0;j<k;j++)
      {
	if(ar3[j]>temp)
	{
	  swap=ar3[j];
	  ar3[j]=temp;
	  temp=swap;
	}
	else
	{
	  for(j=0;j<k;j++)
	  {
	    if(ar3[j]==temp)
	      flag=1;
	  }
	}
      }
      if(flag==0)
	ar3[k++]=temp;
      flag=0;
    }
  }
  return k;
}