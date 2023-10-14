#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n;
char ar[20];
clrscr();
printf("Enter the string :");
gets(ar);
n=strlen(ar);
printf("%d is the length of the string",n);
getch();
}
