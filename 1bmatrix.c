#include<stdio.h>
#include<malloc.h>
void main()
{
  int i,j,m,n,d1=0,d2=0,sum=0;
  int *p[3];
  printf("enter row and colum size\n");
  scanf("%d%d",&m,&n);
  if(m!=n)
  {
  printf("it is not a square matrix\n");
  }
else
{
p[0]=(int*)malloc(m*n*sizeof(int));
p[1]=(int*)malloc(m*n*sizeof(int));
p[2]=(int*)malloc(m*n*sizeof(int));
printf("enter the matrim ele\n");
   for(i=0;i<m;i++)
   for(j=0;j<n;j++)
   scanf("%d",*(p+i)+j);
          for(i=0;i<m;i++)
          d1+=*(*(p+i)+j);
          for(i=0,j=(n-1);i<m;i++,j--)
          d2+=*(*(p+i)+j);
for(i=0;i<m;i++)
for(j=0;j<m;j++)
sum+=*(*(p+i)+j);
printf("primary matrix=%d\n",d1);
printf("secondary matrix=%d\n",d2);
printf("the sum is %d\n",sum);
}
}


















