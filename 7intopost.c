#include<stdio.h>
#include<string.h>
char stack[100];
int top= -1;

void push(char ch)
{stack[++top]=ch;}

char pop()
{return(stack[top--]);}

int pred(char ch)
{
int p=0;
switch (ch)
{
case '$':
case '^':p=3;
	break;
case '*':
case '/':p=2;
	break;
case '+':
case '-':p=1;
	break;
case '(':p=-1;
	break;
}
return p;
}

void conversion(char infix[],char postfix[])
{
int i=0,p=0;
char ch;
while((ch=infix[i])!='\0')
{
 switch(ch)
	{
         default:postfix[p++]=ch;
		break;
	case '(':push(ch);
		break;
	case ')':while(top!=-1 && stack[top]!='(')
			postfix[p++]=pop();
		pop();
		break;
	case '*':
	case '/':
	case '+':
	case '-':while(top!=-1 && pred(stack[top])>=pred(ch))
		postfix[p++]==pop();
		push(ch);
		break;
	case '$':
	case '^':while(top!=-1 && pred(stack[top])>pred(ch))	
		postfix[p++]=pop();
		push(ch);
		break;
	}
i++;
}
while(top!=-1)
	postfix[p++]=pop();
	postfix[p]='\0';
}

int main()
{
char inix[100],posfix[100];
printf("enter an infix expression\n");
scanf("%s",inix);
conversion(inix,posfix);
printf("postfix expression= %s \n",posfix);
return 0;
}











