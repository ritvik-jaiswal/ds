#include<stdio.h>
#include<malloc.h>
#define size 3
int count =0;
struct node
  {
   int info;
   struct node *link;
  };
typedef struct node*NODE;
NODE first=NULL;
NODE getnode()
 {
   NODE temp;
   temp=(NODE)malloc(sizeof(struct node));
   if(temp==NULL)
    {
     printf("allocation failed\n");
     return;
    }
  return temp;
 }
void push(int item)
{
 NODE temp;
 temp=getnode();
 temp->info=item;
 temp->link=NULL;
 if(count==size)
 {
   printf("STACK OVERFLOW\n");
   return;
 }
 if(first==NULL)
  first=temp;
 else
 {
  temp->link=first;
  first=temp;
 }
  count++;
}
void pop()
{
NODE temp=first;
 if(count==0)
 {
   printf("Stack Underflow\n");
   return;
 }
 printf("item deleted=%d\n",first->info);
 first=first->link;
 free(temp);
 count--;
}

void display()
{
 NODE cur=first;
 if(first==NULL)
 {
  printf("Stack Empty\n");
  return;
 }
  printf("stack contents\n");
  while(cur!=NULL)
 {
   printf("%d\t",cur->info);
   cur=cur->link;
 }
}
void main()
{
 int choice,data;
 printf("____MENU____\n");
 printf("1.PUSH\t 2:POP\t3:DISPLAY\n");
 for(;;)
 {
   printf("Enter the choice\n");
   scanf("%d",&choice);
   switch(choice)
  {
   case 1: printf("Enter the elements to be pushed\n");
         scanf("%d",&data);
         push(data);
         break;
   case 2: pop();
        break;
   case 3 :display();
        break;
   default:return;
}
}
}





