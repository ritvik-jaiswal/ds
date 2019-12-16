#include<stdio.h>
#include<stdlib.h>
int bs(int a[],int key,int l,int h)
{
int mid;
mid=(l+h)/2;
if(l>h) return (-1);

if(key==a[mid]) return mid;
if(key>a[mid]) return bs(a,key,mid+1,h);
if(key<a[mid]) return bs(a,key,l,mid-1);
}

 void main()
 {
int key,*a,i,n,res,rp,p;
 do
 {
 printf("enter number of terms\n");
 scanf("%d",&n);
 a=(int*)malloc(n*sizeof(int));
 printf("Enter %d numbers\n",n);
 for(i=0;i<n;i++)
 scanf("%d",a+i);
 p=0;
 for(i=0;i<n-1;i++)
 if(a[i]<a[i+1])
 p++;
 if(p==n-1)
 printf("stored in ascending order\n");
 else
 {printf("not stored,enter in ascending order\n");
 goto AGAIN;}
 printf("Enter the key to be searched\n");
 scanf("%d",&key);
 res=bs(a,key,0,(n-1));
 if(res==-1)
 printf("key not found\n");
 else
 {
 printf("key found at %d location\n",res+1);
 }
 AGAIN: printf("press 1 to continue\n");
 		scanf("%d",&rp);
 }while(rp==1);
 
 }
