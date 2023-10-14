#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,j,temp,swap,ar[50];
	clrscr();
	printf("Enter Number of item =");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Number =");
		scanf("%d",&temp);
		if(i==0)
			ar[i]=temp;
		else
		{
			for(j=0;j<i;j++)
			{
				if(ar[j]>temp)
				{
					swap=ar[j];
					ar[j]=temp;
					temp=swap;
				}
			 }
			 ar[i]=temp;

		}
	}
	for(i=0;i<n;i++)
		printf("%d ",ar[i]);
	getch();
}
