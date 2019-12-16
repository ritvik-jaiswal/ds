#include<stdio.h>
void toi(int n,char from,char to,char aux)
{
if(n==1)

{printf("move disc 1 from peg%c to %c\n",from,to);
return ;}
toi(n-1,from,aux,to);
printf("move %d disk from peg %c to %c\n",n,from,to);
toi((n-1),aux,to,from);
}

void main()
{
int n;
printf("Enter no. of disks\n");
scanf("%d",&n);
printf("moves:\n");
toi(n,'A','C','B');
}
