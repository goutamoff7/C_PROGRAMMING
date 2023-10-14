/* Remove Duplicates without using new array*/
#include<stdio.h>
#include<conio.h>
void main()
	{
	  int ar[20],n,i,j;
	  clrscr();
	  printf("Enter the size of Array within 20=");
	  scanf("%d",&n);
	  printf("Enter %d Values\n",n);
	  for(i=0;i<n;i++)
	      scanf("%d",&ar[i]);
	  for(i=0;i<n-1;i++)
	       for(j=i+1;j<n;j++)
		  {
		    if(ar[i]==ar[j])
		       ar[j]=0;
		  }
	  for(i=0;i<n;i++)
	     {
	       if(ar[i]!=0)
		  printf("\n%d",ar[i]);
	     }
		  getch();
	}

