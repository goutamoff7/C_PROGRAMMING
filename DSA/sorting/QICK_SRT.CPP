#include<stdio.h>
#include<conio.h>
void quick(int [],int,int);
void main()
{
  int ar[100],n,i;
  clrscr();
  printf("Enter the size of Array: ");
  scanf("%d",&n);
  printf("Enter elements:\n");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  quick(ar,0,n-1);
  printf("Sorted Array: ");
  for(i=0;i<n;i++)
    printf("%d ",ar[i]);
  getch();
}
void quick(int ar[],int first,int last)
{
  int low,high,mid,temp;
  low=first;
  high=last;
  mid=ar[(first+last)/2];
  do
  {
    while(ar[low]<mid)
      low++;
    while(ar[high]>mid)
      high--;
    if(low<=high)
    {
      temp=ar[low];
      ar[low]=ar[high];
      ar[high]=temp;
      low++;high--;
    }
  }while(low<high);
  if(low<last)
    quick(ar,low,last);
  if(high>first)
    quick(ar,first,high);
}




