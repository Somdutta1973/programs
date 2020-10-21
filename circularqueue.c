#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct {
int q[MAX];
int front;
int rear;
} queue;
void enqueue(queue *, int);
void dequeue(queue *, int);
void enqueue(queue *p, int key)
{
if(p->front-1 == p->rear)
printf("Queue is Full.");
else
{
p->q[p->front]= key;
p->front = (p->front - 1 + MAX) % MAX;
printf("The Item added is: ", key);
}
}
void dequeue(queue *p, int key)
{
if(p->front == -1)
printf("Queue is Empty.");
else
{
p->q[p->front]= key;
p->front = -1;
if(p->front == p->rear)
p->front = -1;
p->rear = -1;
printf("The element is needed:");
}
}
void display(queue *p)
{
if(p->front == -1)
printf("The queue is empty");
else
{
if(p->front == p->rear)
{
for()



{
queue q1;
q1.Front=-1;
q1.Rear=-1;
int key;int key1;
int ch;

printf("\n 1.Press 1 for inserting element into the front of the queue \n 2.Press 2 for deleting element from the front of the queue \n 3. Press 3 for inserting element into the rear of the queue \n 4. Press 4 for deleting element from the rear of the queue \n 5. Press for displaying the queue\n 6. press 6 for exit");
while(1)
{
printf("\n Enter the choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("Enter the element to be entered :\n");
scanf("%d",&key);
insert_front(&q1,key);

break;
case 2:
delete_front(&q1);

break;
case 3:
printf("Enter the element to be entered:\n");
scanf("%d",&key1);
insert_rear(&q1,key1);

break;
case 4:
delete_rear(&q1);
break;
case 5:
display(&q1);
break;
case 6:
exit(0);
break;
default:
printf("Wrong input");
}
}
}
