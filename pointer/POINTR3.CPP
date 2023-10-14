//Find largest number using pointer
#include<stdio.h>
#include<conio.h>
int lar(int[],int);
void main()
{
  int i,l,ar[20],n;
  clrscr();
  printf("Enter Required No. of Elements: ");
  scanf("%d",&n);
  printf("Enter %d Number: ",n);
  for(i=0;i<n;i++)
  scanf("%d",&ar[i]);
  l=lar(ar,n);
  printf("The largest element=%d",l);
  getch();
}
int lar(int *p,int n)
{
  int l=0,i;
  for(i=0;i<n;i++)
  {
    if(l<*p)
      l=*p;
    p++;
  }
  return l;
}
