/* Insert Numbers in the array and printlargest and smallest Number
and their Number of Digits*/
#include<stdio.h>
#include<conio.h>
void main()
	{
	  int ar[20],n,i,l,s,ld=0,sd=0;
	  clrscr();
	  printf("Enter the size of Array within 20=");
	  scanf("%d",&n);
	  printf("Enter %d Values\n",n);
	  for(i=0;i<n;i++)
	      scanf("%d",&ar[i]);
	  l=s=ar[0];
	  for(i=1;i<n;i++)
	     {
	       if(l<ar[i])
		  l=ar[i];
	       if(s>ar[i])
		  s=ar[i];
	     }
	     printf("Largest No - %d\nSmallest No - %d",l,s);
	  while(l!=0)
		{
		  ld=ld+1;
		  l=l/10;
		}
	  while(s!=0)
		{
		  sd=sd+1;
		  s=s/10;
		}
	  printf("\n Number of Digits Present in the Largest Number = %d",ld);
	  printf("\n Number of Digits Present in the Smallest Number = %d",sd);
	  getch();
	}
