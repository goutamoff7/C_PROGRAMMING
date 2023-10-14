#include<stdio.h>
#include<conio.h>
void main()
	{
	  int i,j,n;
	  clrscr();
	  printf("Enter the range=");
	  scanf("%d",&n);
	  for(i=1;i<=n;i++)
	     {
	       for(j=1;j<=i;j++)
		  {
		    if(j%2==0)
		       printf("* ");
		    else
		       printf("%d ",j);
		  }
	       printf("\n");
	     }
	  getch();
	}
