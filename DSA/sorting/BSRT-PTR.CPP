/*#include<stdio.h>
#include<conio.h>
void bbl(int [],int);
void main()
{
 int i,n,arr[10];
 clrscr();
 printf("Enter the range between 1 to 10: ");
 scanf("%d",&n);
 printf("Enter %d integers: ",n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 printf("\nBefore Sorting\n");
 printf("The Array:");
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
 bbl(arr,n);
 printf("\nAfter Sorting\n");
 printf("The Array:");
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
 getch();
}
void bbl(int ar[],int n)
{
 int i,*k,j,*p;
 for(i=0;i<n;i++)
 {
  p=ar;
  for(j=0;j<n-1-i;j++)
  {
   if(*p>*(p+1))
   {
    *k=*p;
    *p=*(p+1);
    *(p+1)=*k;
   }
   p++;
  }
 }
} */


#include<stdio.h>
#include<conio.h>
void bbl(int [],int);
void main()
{
 int i,n,arr[10];
 clrscr();
 printf("Enter the range between 1 to 10: ");
 scanf("%d",&n);
 printf("Enter %d integers: ",n);
 for(i=0;i<n;i++)
  scanf("%d",&arr[i]);
 printf("\nBefore Sorting\n");
 printf("The Array:");
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
 bbl(arr,n);
 printf("\nAfter Sorting\n");
 printf("The Array:");
 for(i=0;i<n;i++)
  printf("%d ",arr[i]);
 getch();
}
void bbl(int *p,int n)
{
 int i,*k,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-1-i;j++)
  {
   if(*(p+j)>*(p+j+1))
   {
    *k=*(p+j);
    *(p+j)=*(p+j+1);
    *(p+j+1)=*k;
   }
  }
 }
}