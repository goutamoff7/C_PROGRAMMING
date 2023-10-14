/*Print the square matrix cross wise
INPUT    OUTPUT
345       3 5
567    ->  6
459       4 9 */

#include<stdio.h>
#include<conio.h>
void main()
  {
   int ar[10][10],i,j,n;
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
	   printf("%d",ar[i][j]);
	 printf("\n");
       }
       printf("\n");
     for(i=0;i<n;i++)
     {
	for(j=0;j<n;j++)
	  {
	    if(i+j==n-1||i==j)
	       printf("%d",ar[i][j]);
	    else
	       printf(" ");
	  }
	printf("\n");
     }
   getch();
}

