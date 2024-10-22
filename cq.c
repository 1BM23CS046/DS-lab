#include<stdio.h>
#define size 5

int item[size];
int front=-1,rear=-1;

int isfull()
{
    if((front==rear+1)||(front==0&&rear==size-1));
return 0;
}

int isempty()
{

    if(front==-1)
        return 0;
}

void enqueue(int element)
{

    if(isfull)
       printf("queue isfull");
       else{
        if(front==-1)front=0;
        rear=(rear+1)%size;
        item[rear]=element;
        printf("inserted ->%d",element);

       }
}

void dequeue(int element)
{

    if(isempty())
    {
        printf("queue is empty");
        return (-1);
    }
    else
    {
        element=item[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=(front+1)%size;
        }
        printf("deleted element -> %d",element);
        return (element);
    }
}


void display()
{
    int i;
    if(isempty(1))
        printf("empty queue");
    else
    {
        printf("front ->%d",front);
        printf("item ->");
        for(i=front;i!=rear;i=(i+1)%size)
        {
            printf("%d",item[i]);

        }
        printf("%d",item[i]);
        printf("rear ->%d\n",rear);
    }
}

