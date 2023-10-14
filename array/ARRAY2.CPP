/*Count Odd and Even Number in a array*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int ar[20],i,n,eve=0,odd=0;
    clrscr();
    printf("Enter the Size of Array within 20 = ");
    scanf("%d",&n);
    printf("Enter %d Values= ",n);
    for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
       {
	 if(ar[i]%2==0)
	    eve++;
	 else
	    odd++;
       }
    printf("Count of Even Number = %d",eve);
    printf("Count of Odd Number = %d",odd);
    getch();
 }

