#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main()
{
int n,i,j,k;
char *p[50],*temp;
	printf("enter number of names\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	p[i]=(char*)malloc(n*sizeof(char));
	printf("enter %d names\n",n);
        getchar();
	for(i=0;i<n;i++)
        {
	 scanf("%s",p[i]);
	}
	for(i=1;i<n;i++)
	{
	 for(j=0;j<(n-i);j++)
	 {
	  k=strcmp(p[j],p[j+1]);
	  if(k>0)
	  {
	   temp=p[j];
	   p[j]=p[j+1];
	   p[j+1]=temp;
	  }
         }
        }
    printf("The sorted names are\n");
    for(i=0;i<n;i++)
    printf("%s  ",p[i]);
    printf("\n");
}	
