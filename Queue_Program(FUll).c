#include<stdio.h>
#include<stdlib.h>
#define maxsize 20
int rear=-1,front=-1,queue[maxsize];
void Enqueue();
void Dequeue();
void peek();
void delet();
void display();
int main()
{
    int ch;
    do
    {
        printf("Enter your choice\n1-Enqueue\n2-Dequeue\n3-peek\n4-Display\n5-Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                Enqueue();
                break;
            }
            case 2:
            {
                Dequeue();
                break;
            }
            case 3:
            {
                peek();
                break;
            }
            case 4:
            {
                display();
                break;
            }
            case 5:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("Wrong input\n");
                break;
            }
        }
    }while(ch!=5);
    return 0;
}
void Enqueue()
{
    int num;
  if(rear>maxsize-1)
  {
    printf("Queue is Full(Overflow)\n");
  }
  else
  {
    printf("Enter the element:\n");
    scanf("%d",&num);
    if(front=-1)
    {
        front++;
    }
    rear++;
    queue[rear]=num;
  }
}
void Dequeue()
{
    if(front==-1||front>rear)
    {
        printf("Queue is empty\n");
    }
    else
    {
        int n;
        n=queue[front];
        front++;
        printf("%d is Dequeue\n",n);
    }
}
void peek()
{
    if(front==-1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("Peek value is %d\n",queue[rear]);
    }
}
void display()
{
    int i;
    printf("Queue is:\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}