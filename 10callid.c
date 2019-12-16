#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
int q[SIZE];
int front=0;int rear=-1; 
void insert()
{
int n;
front=0;

if(rear!=SIZE-1)
	{
printf("Enter the CALL ID to be inserted into queue\n");
scanf("%d",&n);
	rear++;
		q[rear]=n;
	}
else
	printf("QUEUE FULL!!\n");	
}
int delete()
{	int i;
	
	int temp = q[front];
	//LEFT SHIFT
	for(i=0;i<=rear;i++)
	{
		q[i]=q[i+1];
	}
	if(rear!=-1)
	{ 
	rear--;
	return temp;
	}
	
	
	
}
void display()
{
	int i=0;
	if(front==-1||rear==-1)
		printf("QUEUE IS EMPTY\n");
	else{	
	for(i=0;i<=rear;i++)
	{
		printf("%d",q[i]);
	}
		}
}
int main()
{
	int q[SIZE];int res;
	int ch;
	
while(1){	
	printf("Enter 1:INSERT,2:DELETE,3:DISPLAY,4:EXIT\n");
	scanf("%d",&ch);

	switch(ch)
		{
			case 1:insert();
					break;
			case 2:res=delete();
					if(rear!=-1)
						printf("Element deleted is %d\n",res);
					else
						printf("QUEUE EMPTY\n");
					break;
			case 3:display();
					break;
			case 4:exit(0);
					break;
			default:printf("wrong choice\n");
					break;
													
		}
	    }	
return 0;		
}
				
			

