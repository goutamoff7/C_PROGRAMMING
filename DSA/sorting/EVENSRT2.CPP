//sort only even number //

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,ar[20],n,temp;
        clrscr();
	printf("Enter the number of terms: ");
	scanf("%d",&n);
	printf("Enter the terms: ");
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]%2==0 && ar[j]%2==0)
			{
				if(ar[i]>ar[j])
				{
					temp=ar[i];
					ar[i]=ar[j];
					ar[j]=temp;
				}
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d ",ar[i]);	
	getch();
}
