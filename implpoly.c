#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct Node
{
int c;
int e;
struct Node *link;
}*ptr1,*ptr2,*header=NULL,*ptr;
void create(int c,int e)
{
ptr=(struct Node*)malloc(sizeof(struct Node)); ptr->c=c;
ptr->e=e;
ptr->link=NULL;
if(header==NULL)
{
header=ptr;
}
else
{
if(header->e==ptr->e)
{
header->c=header->c+ptr->c;
}
else
{
ptr1=header;
ptr2=NULL;
while(ptr1!=NULL&&ptr1->e>ptr->e) {
ptr2=ptr1;
ptr1=ptr1->link;
}
if(ptr1==NULL)
{
ptr2->link=ptr;
}
else if(ptr2==NULL)
{
ptr->link=ptr1;
header=ptr;
}
else if(ptr1->e==ptr->e) {
ptr1->c=ptr1->c+ptr->c; }
else
{
ptr2->link=ptr; ptr->link=ptr1; }}}}
void display(){
printf("Polynomial is:\n");
ptr1=header;
if(header->link!=NULL)
{
while(ptr1->link!=NULL)
{
printf("%dx^%d+",ptr1->c,ptr1->e); ptr1=ptr1->link;
}
}
printf("%dx^%d",ptr1->c,ptr1->e);
}
void main()
{
int t,c,e;
printf("Enter the number of terms:\n"); scanf("%d",&t);
for(int i=0;i<t;i++)
{
printf("Enter the coefficent \n");
scanf ("%d",&c);
printf("Enter the exponent:\n"); 
scanf("%d",&e);
create(c,e);
}
display();
}
