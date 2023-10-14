#include<stdio.h>
#include<conio.h>
void main()
  {
   int ar[10][10],n,l=0,row,clm,i,j;
   clrscr();
   printf("Enter the size of array within 10 =");
   scanf("%d",&n);
   printf("Enter Values\n");
   for(i=0;i<n;i++)
     for(j=0;j<n;j++)
       scanf("%d",&ar[i][j]);
     for(i=0;i<n;i++)
       {
	 for(j=0;j<n;j++)
	   printf("\t%d",ar[i][j]);
	 printf("\n");
       }
       printf("\n");
     for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	  {
	    if(l<ar[i][j])
	      {
		 l=ar[i][j];
		 row=i;
		 clm=j;
	      }
	  }
     printf("The largest Number is %d",l);
     printf("\nThe Location is ar[%d][%d]",row,clm);
   getch();
}
