#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,n,swap,ar[25],nda[25],coa[25],count=1,k=0,maxf,minf,maxco=0,minco=0;
  clrscr();
  printf("Enter the size of array: ");
  scanf("%d",&n);
  printf("Enter %d Elements: \n",n);
  for(i=0;i<n;i++)
    scanf("%d",&ar[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-i-1;j++)
    {
      if(ar[j]>ar[j+1])
      {
	swap=ar[j+1];
	ar[j+1]=ar[j];
	ar[j]=swap;
      }
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(ar[i]==ar[j] && ar[i]!=-1)
      {
	count++;
	ar[j]=-1;
      }
      else
	break;
    }
    if(ar[i]!=-1)
    {
      nda[k]=ar[i];
      coa[k++]=count;
      count=1;
    }
  }
  maxf=minf=coa[0];
  for(i=0;i<k;i++)
  {
    if(maxf<coa[i])
      maxf=coa[i];
    if(minf>coa[i])
      minf=coa[i];
  }
  printf("(");
  for(i=0;i<k;i++)
  {
    if(minf==coa[i] && minco<2)
    {
      printf("%d,",nda[i]);
      minco++;
    }
    if(minco==2)
      break;
  }
  printf("),(");
  for(i=0;i<k;i++)
  {
    if(maxf==coa[i] && maxco<2)
    {
      printf("%d,",nda[i]);
      maxco++;
    }
    if(maxco==2)
      break;
  }
  printf(")");
  getch();
}
