#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5
int st[5];
int top=-1,item;
void push()
{
	if (top==STACK_SIZE-1)
	printf("The stack is in overflow condition\n");
	else
	{
		top++;
		st[top]=item;
	}
}
int pop()
{
	int del_item;
	if (top==-1)
	printf("stack underflow\n");
	else
	{
		del_item=st[top];
		top--;
		return del_item;
	}
}
void display()
{
	if (top==-1)
	printf("stack is empty\n");
	else
	{
		for(int i=0;i<=top;i++)
		printf("%d\t",st[i]);
	}
}
void main()
{
    int a;
    int choice;
   
    while (1)
    {   printf("Enter the choice:\n");
    scanf("%d",&choice);
      
        switch (choice)
    {
    case 1: printf("Enter the item to be inserted:\n");
            scanf("%d",&item);
            push ();
        break;
    case 2: a=pop();
            printf("%d\n",a);
            printf("This item is removed\n");
            break;
    case 3: display();
            break;            
    
    default: exit(0);
        break;
    }
        
    }
    
}
