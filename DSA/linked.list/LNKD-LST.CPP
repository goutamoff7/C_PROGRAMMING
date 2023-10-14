#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<process.h>
typedef struct node
{
  int da;
  struct node *ne;
}nd;
nd *make();
void disp();
void prntlrg();
void frnsrt();
void rmvpnd();
void rmvhnd();
void rmvlnd();
void srt();
void odlst();
void pinsrt();
void rvrs(nd*);
void check(nd*);
nd *hd='\0',*pre='\0';
void main()
{
  int ch;
  char c;
  clrscr();
  do
  {
    printf("\n1.Insert 2.Display 3.Print largest Number 4.Front Insert 5.Remove Positional Node 6.Remove Head Node 7.Remove Last Node 8.Sorting 9.odlst 10.Positional Insert 11.Reverse Print 12.Check Circular or not 13.Exit");
    printf("\nEnter your Choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:  printf("\n List Creation");
	       if(hd==NULL)
		 hd=pre=make();
	       else
		 pre=pre->ne=make();
		 break;
      case 2:  disp();
	       break;
      case 3:  prntlrg();
	       break;
      case 4:  frnsrt();
	       break;
      case 5:  rmvpnd();
	       break;
      case 6:  rmvhnd();
	       break;
      case 7:  rmvlnd();
	       break;
      case 8:  srt();
	       break;
      case 9:  odlst();
	       break;
      case 10: pinsrt();
	       break;
      case 11: rvrs(hd);
	       break;
      case 12: check(hd);
	       break;
      case 13: exit(0);
      default: printf("\nYou have Entered Wrong Choice Please Enter Correct Choice");
    }
    printf("\n Enter Y/y to Continue the program: ");
    fflush(stdin);
    c=getchar();
  }while(c=='Y' || c=='y');
  getch();
}
nd *make()
{
  int da;
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  printf("\nEnter Data for Linked List: ");
  scanf("%d",&da);
  nw->da=da;
  nw->ne='\0';
  return nw;
}
void disp()
{
  nd *p;
  if(hd==NULL)
    printf("No Data");
  else
  {
    for(p=hd;p!='\0';p=p->ne)
      printf("%d-->",p->da);
  }
}
void prntlrg()
{
  int lrg=0;
  nd *p;
  for(p=hd;p!=NULL;p=p->ne)
  {
    if(p->da>lrg)
      lrg=p->da;
  }
  printf("The Largest Value = %d",lrg);
}
void frnsrt()
{
  int da;
  nd *nw;
  nw=(nd*)malloc(sizeof(nd));
  printf("Enter Data in Front: ");
  scanf("%d",&da);
  nw->da=da;
  nw->ne=hd;
  hd=nw;
}
void rmvpnd()
{
  int c=1,rmv;
  nd *p;
  printf("Enter the Node you want to remove: ");
  scanf("%d",&rmv);
  for(p=hd;p!=NULL;p=p->ne)
  {
    if(c==rmv-1)
    {
      p->ne=p->ne->ne;
      break;
    }
    c++;
  }
}
void rmvhnd()
{
  if(hd==NULL)
    printf("No Data");
  else
    hd=hd->ne;
}
void rmvlnd()
{
  nd *p;
  for(p=hd;p->ne->ne!=NULL;p=p->ne);
  p->ne=NULL;
  pre=p;
}
void srt()
{
  nd *i,*j;
  int swap;
  for(i=hd;i!=NULL;i=i->ne)
  {
    for(j=hd;j->ne!=NULL;j=j->ne)
    {
      if(j->da>j->ne->da)
      {
	swap=j->da;
	j->da=j->ne->da;
	j->ne->da=swap;
      }
    }
  }
}
void odlst()
{
  nd *nw,*p,*hd2=NULL,*pre2=NULL;
  for(p=hd;p!=NULL;p=p->ne)
  {
    if(p->da%2!=0)
    {
      if(hd2==NULL)
      {
	nw=(nd*)malloc(sizeof(nd));
	nw->da=p->da;
	nw->ne=NULL;
	hd2=pre2=nw;
      }
      else
      {
	nw=(nd*)malloc(sizeof(nd));
	nw->da=p->da;
	nw->ne=NULL;
	pre2=pre2->ne=nw;
      }
    }
  }
  printf("New Odd Number List: ");
  for(p=hd2;p!=NULL;p=p->ne)
    printf("%d-->",p->da);
}
void pinsrt()
{
  nd *p,*nw;
  int pos,da,c=1;
  printf("Enter the Position at which you want to add data: ");
  scanf("%d",&pos);
  nw=(nd*)malloc(sizeof(nd));
  printf("Enter the data: ");
  scanf("%d",&da);
  nw->da=da;
  for(p=hd;p!=NULL;p=p->ne)
  {
    if(c==pos-1)
    {
      nw->ne=p->ne;
      p->ne=nw;
      break;
    }
    c++;
  }
}
void rvrs(nd *p)
{
  if(p==NULL)
    return;
  else
    rvrs(p->ne);
  printf("%d-->",p->da);
}
void check(nd *p)
{
  for(;;p=p->ne)
  {
    if(p->ne==hd)
    {
      printf("Circular");
      break;
    }
    if(p->ne==NULL)
    {
      printf("Not Circular");
      break;
    }
  }
}














