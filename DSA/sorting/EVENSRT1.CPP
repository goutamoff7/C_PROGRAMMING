#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,p=0,n,ar[20],br[10],swap;
  clrscr();
  printf("Enter the size of array: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&ar[i]);
    if(ar[i]%2==0)
    {
      br[p++]=ar[i];
      ar[i]=-1;
    }
  }
  for(i=0;i<p-1;i++)
  {
    for(j=0;j<p-i-1;j++)
    {
      if(br[j]>br[j+1])
      {
	swap=br[j+1];
	br[j+1]=br[j];
	br[j]=swap;
      }
    }
  }
  p=0;
  for(i=0;i<n;i++)
  {
    if(ar[i]==-1)
      ar[i]=br[p++];
  }
  printf("The Sorted Array: ");
  for(i=0;i<n;i++)
    printf("%d-",ar[i]);
  getch();
}