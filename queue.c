#include<stdio.h>
#define max 3
int queue[max];
int front=-1,rear=-1;
void insert(int item)
{
    if(rear==max-1)
    {
        printf("queue overflow\n");
        return;
    }
    if(front==-1)front=0;
    queue[++rear]=item;
    printf("inserted %d\n",item);
}

int delete()
{
        if(front==-1||front>rear)
        printf("queue is underflow\n");
        return-1;
        return queue[front++];
}

void display()

{
    int i;
    if(front==-1||front>rear)
    {
       printf("queue is empty\n");
        return;
    }
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",queue[i]);
    }
}

int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
printf("deleted %d\n",delete());
display();
return 0;
}
