#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,i,vowel=0,consonent=0;
  char ar[20];
  clrscr();
  printf("Enter the string :" );
  gets(ar);
  n=strlen(ar);
  for(i=0;i<n;i++)
  {
    if(ar[i]=='a'|| ar[i]=='e'|| ar[i]=='i'||
       ar[i]=='o'|| ar[i]=='u'|| ar[i]=='A'||
       ar[i]=='E'|| ar[i]=='I'|| ar[i]=='O'||
       ar[i]=='U')
      vowel++;
    else
     if(ar[i]!=' ')
      consonent++;
  }
   printf("Number of Vowel %d",vowel);
   printf("\nNumber of Consonent %d",consonent);
  getch();
}
