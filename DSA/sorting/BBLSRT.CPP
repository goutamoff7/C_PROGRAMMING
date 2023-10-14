#include<stdio.h>
#include<conio.h>
void main()
  {
    int i,j,ar[20],n,swap;
    clrscr();
    printf("Enter the size of the array within 20 =");
    scanf("%d",&n);
    printf("Enter value for array = \n");
    for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
      /*for(i=0;i<n-1;i++)*/    for(i=0;i<n-1;i++)
	/* for(j=i+1;j<n;j++)*/    for(j=0;j<n-i-1;j++)
	/*   if(ar[i]>ar[j])*/        if(ar[j]>ar[j+1])
	   /*   {           */          {
	   /*	swap=ar[j]; */            swap=ar[j+1];
	   /*  ar[j]=ar[i]; */            ar[j+1]=ar[j];
	   /*	ar[i]=swap; */            ar[j]=swap;
	   /*   }*/                     }
	      for(i=0;i<n;i++)
		printf("%d ",ar[i]);
		getch();
  }

