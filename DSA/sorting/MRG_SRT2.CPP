#include<stdio.h>
#include<conio.h>
int ar[100];
void mrg_srt(int,int);
void mrg(int,int,int);
void main()
{
  int i,j,n;
  clrscr();
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter Elements into the array:\n");
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  mrg_srt(0,n-1);
  printf("Sorted array: ");
  for(i=0;i<n;i++)
    printf("%d-",ar[i]);
  getch();
}
void mrg_srt(int low,int high)
{
  int mid;
  if(low!=high)
  {
    mid=(low+high)/2;
    mrg_srt(low,mid);
    mrg_srt(mid+1,high);
    mrg(low,mid,high);
  }
}
void mrg(int low,int mid,int high)
{
  int tmp[100],i=low,k=low,j=mid+1;
  while((i<=mid)&&(j<=high))
  {
    if(ar[i]<=ar[j])
      tmp[k++]=ar[i++];
    else
      tmp[k++]=ar[j++];
  }
  while(i<=mid)
    tmp[k++]=ar[i++];
  while(j<=high)
    tmp[k++]=ar[j++];
  for(i=low;i<=high;i++)
    ar[i]=tmp[i];
}



