#include<stdio.h>
#include<string.h>

void strcopy(char *s1,char *s2)
{
while(*s2!='\0')
{
	*s1=*s2;
	s1++;
	s2++;
}
*s1='\0';
}
int strcomp(char *s1,char *s2)
{
while(*s1!='\0'||*s2!='\0')
{
	if(*s1!=*s2)
	return (*s1-*s2);
	s1++;
	s2++;
	}
	return 0;
	}
void strconcat(char *s1,char *s2)
	{
	while(*s1!='\0')
	s1++;
	while(*s2!='\0')
	{
	*s1=*s2;
	s1++;
	s2++;
}
*s1='\0';
}
void strreverse(char *s1)
	{
	int i=0,k=0,j;
	char s3[30];
	while(*s1)
	{
s1++;k++;
}
for(i=0,j=k-1;j>=0;j--,i++)
	{
	--s1;
	s3[i]=*s1;
	}
s3[i]='\0';
strcopy(s1,s3);
}
int main()
{
	char s1[10],s2[10],t1[10];
	int choice,result;
	printf("enter the 1 string:\n");
	gets(s1);
	printf("enter the 2 string:\n");
	gets(s2);
	strcopy(t1,s1);
	printf("menu\n");
	printf(" 1-strcopy\n 2-strcomp\n 3-strconcat\n 4-strreverse\n");
	for(;;)
{
printf("enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 2:strcopy(s1,t1);
       result=strcomp(s1,s2);
       if(result>0)
       printf("%s is greater than %s\n",s1,s2);
       if(result<0)
       printf("%s is greater than %s\n",s2,s1);
       else
       printf("string are equal\n");
       break;
       
case 1:strcopy(s1,t1);
       printf("string before copying\n s1=%s\n s2=%s\n",s1,s2);
       strcopy(s1,s2);
       printf("strings after copying\n s1=%s\n s2=%s\n",s1,s2);
       break;

case 3:strcopy(s1,t1);
       printf("string before concatenation\n s1=%s\n s2=%s\n",s1,s2);
       strconcat(s1,s2);
       printf("string after concatenation\n s1=%s\n s2=%s\n",s1,s2);
       break;

case 4:strcopy(s1,t1);
       printf("string before reversing\n s1=%s\n s2=%s\n",s1,s2);
       printf("string after revesing\n");
       strreverse(s1);
       printf("s1=%s\n",s1);
       strcopy(s1,s2);
       strreverse(s1);
       printf("s2=%s\n",s1);
       break;
default:return 0;
}
}
}








