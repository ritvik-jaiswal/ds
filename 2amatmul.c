#include<stdio.h>
#include<malloc.h>
void main()
{
	int i,j,k,r1,r2,c1,c2,(*p)[3],(*q)[3],(*res)[3];
	printf("enter the number of rows and column of first matrtix\n");
	scanf("%d %d",&r1,&c1);
	printf("enter the number of rows and column of second matrix\n");
	scanf("%d %d",&r2,&c2);
	if(c1!=r2)
	{
		printf("false data entry\n");
		return 0;
	}
	else
	{
		p=(int*)malloc(r1*c1*sizeof(int));
		printf("enter the elements of first matrix\n");
		for(i=0;i<r1;++i)
		for(j=0;j<c1;++j)
		scanf("%d",*(p+i)+j);
		
		q=(int*)malloc(r2*c2*sizeof(int));
		printf("enter the elements of second matrix\n");
		for(i=0;i<r2;++i)
		for(j=0;j<c2;++j)
		scanf("%d",*(q+i)+j);

		res=(int*)malloc(r1*c2*sizeof(int));
		for(i=0;i<r1;++i)
		for(j=0;j<c2;++j)
		for(k=0;k<c1;++k)
		*(*(res+i)+j)+=*(*(p+i)+k) * *(*(q+k)+j);

		printf("your result is:\n");
		for(i=0;i<r1;++i)
		{for(j=0;j<c2;++j)
		  printf(" %d  ",*(*(res+i)+j));
		 printf("\n");}		
	}
}
