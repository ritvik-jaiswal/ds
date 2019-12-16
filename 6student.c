#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define size 5
struct student
  {
  char name[20];
  char usn[10];
  };
struct stack
  {
   struct student stud[size];
   int top;
  };

void push(struct stack *ps,struct student st1);
struct student pop(struct stack *ps);
void main()
{
struct stack s;
struct student st1,rt1;
int choice ,i;
s.top=-1;
do{
	printf("\n 1.push \t 2.pop \t 3.display \t 4.quit\n");
	printf( "enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter the name and the usn of student to push: \n");
		      scanf("%s%s",st1.name,st1.usn);
		      push(&s,st1);
		      break;
		case 2:if(s.top==-1)
	       		  printf("\n stack underflow");
		      else{
			      rt1=pop(&s);
			      printf("the student popped is\nname: %s \nusn: %s\n",rt1.name,rt1.usn);
			   }
		      break;
		case 3:if(s.top==-1)
			       printf("\n stack empty");
		       else {
			       printf("stack contents are\n");
			       for(i=s.top;i>=0;i--)
				       {
				       printf("%s %s \n",s.stud[i].name,s.stud[i].usn);
				       }
			       }
		       break;
		case 4:printf("quiting");
		       break;
		default:printf("error");
	}
}
while(choice!=4);
}


void push(struct stack *ps,struct student st1)
{
if(ps->top==size-1)
{
printf("stack overflow\n");
return;
}
else
{
++(ps->top);
strcpy(ps->stud[ps->top].name,st1.name);
strcpy(ps->stud[ps->top].usn,st1.usn);
}
}
struct student pop(struct stack*ps)
{
struct student r;
strcpy(r.name,ps->stud[ps->top].name);
strcpy(r.usn,ps->stud[ps->top].usn);
(ps->top)--;
return(r);
}










