 /*BUBBLE sort using function*/
#include<stdio.h>
#include<conio.h>
void srt(int[],int);
void main()
  {
    int ar[10],i,n;
    clrscr();
    printf("Enter the size of array within 10 = ");
    scanf("%d",&n);
    printf("Enter Value = \n");
    for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
    srt(ar,n);
    for(i=0;i<n;i++)
      printf("\n%d",ar[i]);
    getch();
  }
void srt(int ar[],int n)
{
  int j,i,swap;
  for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
	if(ar[j]>ar[j+1])
	  {
	    swap=ar[j+1];
	    ar[j+1]=ar[j];
	    ar[j]=swap;
	  }
}
