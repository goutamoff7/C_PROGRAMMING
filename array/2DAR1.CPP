#include<stdio.h>
#include<conio.h>
void main()
  {
   int ar[10][10],n,i,j,row,clm;
   clrscr();
   printf("Enter the size row =");
   scanf("%d",&row);
   printf("\nEnter the size of column =");
   scanf("%d",&clm);
   printf("Enter Values\n");
   for(i=0;i<row;i++)
     for(j=0;j<clm;j++)
       scanf("%d",&ar[i][j]);
     for(i=0;i<row;i++)
       {
	 for(j=0;j<clm;j++)
	   printf("\t%d",ar[i][j]);
	 printf("\n");
       }
       printf("\n");
     for(i=0;i<row;i++)
     {
	for(j=0;j<clm;j++)
	  {
	    if(i==0||i==row-1||j==0||j==clm-1)
	       printf("\t%d",ar[i][j]);
	    else
	       printf("\t");
	  }
	printf("\n");
     }
   getch();
}

