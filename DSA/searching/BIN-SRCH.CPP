#include<stdio.h>
#include<conio.h>
bsrch(int[],int,int,int);
void main()
{
  int ar[50],low,high,mid,n,srch,pos,i;
  clrscr();
  printf("Enter the size of Array: ");
  scanf("%d",&n);
  printf("Enter %d element in ascending order:\n",n);
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  printf("Enter the Searched Element: ");
  scanf("%d",&srch);
  low=0;
  high=n-1;
  pos=bsrch(ar,low,high,srch);
  if(pos!=-1)
    printf("The Searched element is in %d position",pos);
  else
    printf("The Searched element is not Found");
  getch();
}

int bsrch(int ar[],int low,int high,int srch)
{
  int mid;
  if(low>high)
  {
    return -1;
  }
  else
  {
    mid=(low+high)/2;
    if(srch>ar[mid])
    {
      low=mid+1;
      return bsrch(ar,low,high,srch);
    }
    else if(srch<ar[mid])
    {
      high=mid-1;
     return bsrch(ar,low,high,srch);
    }
    else if(srch==ar[mid])
      return mid;
  }
}