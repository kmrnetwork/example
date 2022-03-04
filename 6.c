#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int insert(char[], int, int);
int delete(char[], int, int);
void display(char[], int, int);
int main()
{
int choice,rear = 0,front = 0;
char cirqueue[MAX], ele;
while(1)
{
printf("\n\n**********************MENU*****************");
printf("\n1. Insert an Element on to Circular Queue\n2.
Delete an Element from Circular Queue\n3. Display the status of
Circular Queue\n4. Exit\n");
printf("Enter your choice : ");
scanf("%d", &choice);
switch(choice)
{
case 1: rear = insert(cirqueue,rear,front);
break;
case 2: front = delete(cirqueue,rear,front);
break;
case 3: display(cirqueue,rear,front);
break;
case 4: exit(0);
}
}
}
int insert(char cirqueue[MAX], int rear, int front)
{
int ele;
if(front == (rear + 1) % MAX)
{
printf("Circular Queue Overflow\n");
}
else
{
rear = (rear + 1) % MAX;
printf("Enter the element to be inserted: ");
getc(stdin);
scanf("%c",&ele);
cirqueue[rear] = ele;
}
return rear;
}
int delete(char cirqueue[MAX], int rear, int front)
{
if(front == rear)
{
printf("Circular Queue Underflow\n");
}
else
{
front = (front + 1) % MAX;
printf("The element deleted is : %c\n", cirqueue[front]);
}
return front;
}
void display(char cirqueue[MAX], int rear, int front)
{
int i;
if(front == rear)
printf("Circular Queue Underflow\n");
else
{
printf("The elements of circular queue are\n\n");
i=front;
do
{
i=((i+1)%MAX);
printf("%c ",cirqueue[i]);
}
while(i!=rear);
}
}
