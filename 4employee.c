#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
	char emp_name[20];
	int emp_id;
	char dept_name[20];
	float salary;
	};
compute_total_sal(struct employee*e,char dn[],int m);
void main()
{
 int m,i;
 struct employee*emp;
 char dname[20],choice;
 printf("enter the number of employees:");
 scanf("%d",&m);
 emp=(struct employee*)malloc(m*sizeof(struct employee));
 for(i=0;i<m;i++)
{
	printf("enter the details of employee%d\n",i+1);
	printf("enter the employee name:");
	scanf("%s",(emp+i)->emp_name);
	printf("enter the employee ID:");
	scanf("%d",&(emp+i)->emp_id);
	printf("enter the employee department:");
	scanf("%s",&(emp+i)->dept_name);
	printf("enter the salary of the employee:");
	scanf("%f",&(emp+i)->salary);
}
printf("employee details are\n");
printf("%s%-10s%-10s%-10s\n","id","name","dept","salary");
for(i=0;i<m;i++)
{
printf("%d%-10s%-10s%-10g\n",(emp+i)->emp_id,(emp+i)->emp_name,(emp+i)->dept_name,(emp+i)->salary);
}
 do
{
printf("\n enter the department for which the total salary has to be computed:");
	scanf("%s",dname);
	compute_total_sal(emp,dname,m);
	printf("\n do you want to count[Y/N]:");
	scanf("%c",&choice);
}
while(choice=='Y'||choice=='y');
}
compute_total_sal(struct employee*e,char dn[],int m)
{
	float totalsal=0;
	int i,flag=0;
	for(i=0;i<m;i++)
		if(strcmp((e+i)->dept_name,dn)==0)
{
		flag=1;
		totalsal+=(e+i)->salary;
}
		if(flag==0)

		      printf("\n no such department\n");
		else
		      printf("\n total salary of employee in department %s is %f",dn,totalsal);
}

