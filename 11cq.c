#include<stdio.h>
#include<stdlib.h>
#define size 5
struct item{
	int ele;
};
struct cq{
	struct item it[size];
	int front,rear;
};

void insert(struct cq *pq,int x);
int delete(struct cq *pq);

void main()
{
	struct cq q;
	int x,r,c;
	q.front=(size-1);
	q.rear=(size-1);
	do{	printf("\n Press:\n 1 to insert\n 2 to delete\n 3 to QUIT\n");
	scanf("%d",&c);
	
	switch(c)
	{
	case 1:printf("Enter item to be inserted\n");
		scanf("%d",&x);
		insert(&q,x);
		break;
		
	case 2:if(q.front==q.rear)
				printf("UNDERFLOW");
			else
			{
			r=delete(&q);
			printf("%d is deleted\n",r);
			}
			break;
	case 3:printf("OK quitting");
			break;
			
	default:printf("No such operation");
	break;
			}	
	} while(c!=3);
}


void insert(struct cq*pq,int x)
{
if(pq->rear==size-1)
pq->rear=0;
else
(pq->rear)++;
if(pq->rear==pq->front)
{printf("Overflow");
 exit(1);}
pq->it[pq->rear].ele=x;
return; 
}

int delete(struct cq*pq)
{
if(pq->front==size-1)
pq->front=0;
else
(pq->front)++;
return(pq->it[pq->front].ele);
}






