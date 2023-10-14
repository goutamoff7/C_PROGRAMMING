/*Print all the Number present in a array*/
#include<stdio.h>
#include<conio.h>
void main()
  {
    int ar[20],i,n,sum=0;
    clrscr();
    printf("Enter the Size of Array within 20 = ");
    scanf("%d",&n);
    printf("Enter %d Values= \n",n);
    for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
	sum+=ar[i];
    printf("Summation of the Number=%d",sum);
    getch();
 }

