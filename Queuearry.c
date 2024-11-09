#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 3
int queue[MAX_SIZE], REAR=-1, FRONT=-1, item;
void enqueue(){
		if(REAR==MAX_SIZE-1){
		printf("overflow");
	}
	
		if(REAR==-1 && FRONT==-1){
			REAR=0;
			FRONT=0;
			queue[REAR]=item;
		}
		else{
			REAR++;
			queue[REAR]=item;
		}
	}
void dequeue(){
	if(REAR==-1 && FRONT==-1){
		printf("underflow");
	}
		if(REAR==FRONT){
			item = queue[FRONT];
			FRONT=REAR=-1;
		}else{
			FRONT++;
		}
	}
void display(){
	if(FRONT==-1 && REAR==-1){
		printf("Queue is Empty");
	}else{
		for(int i=FRONT; i<=REAR; i++){
			printf("%d \t", queue[i]);
		}
	}
}
void main()
{
	int ch,n;
	do
	{
		printf("\n 1. Enqueue\n 2. Dequeue\n 3. Display\n ");
	printf("Enter your choice:");
	scanf("%d", &ch);
	switch(ch){
		case 1: 
			printf("Enter the element to push : ");
			scanf("%d",&item);
			enqueue();
			break;
		case 2:
		printf("Dequeued");
			dequeue();
			break;
		case 3:
			display();
			break;
		default:
			printf("Enter a valid choice");
	}
	printf ("\n Do you want to continue (1,0)");
	scanf ("%d",&n);
	} while (n==1);
	}