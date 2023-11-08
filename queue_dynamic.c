#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *front = NULL;
struct queue *rare = NULL;
void enque(int data)
{
    struct queue *new = (struct queue*)malloc(sizeof(struct queue));
    new->data=data;
    new->next=NULL;
    if(front==rare && rare ==NULL)
    {
       front = new;
       rare = new;
    }
    else
    {
        rare->next = new;
        rare = new;
    }
}
void deque()
{
    if(front==NULL)
    {
        printf("queue is empty:");
    }
    else
    {
        printf("the deleted num is%d",front->data);
        front = front->next;
    }
}
void display()
{
    if(front==NULL)
    {
        printf("queue is empty:");
    }
    struct queue *temp = front;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    int i =0;
    int choice;
    while(i!=1)
    {
        printf("\n1.push\n2.pop\n3.display\n4.exit\n enter the chioce:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            int data;
            printf("enter the data:");
            scanf("%d",&data);
            enque(data);
            break;
            case 2:
            deque();
            break;
            case 3:
            display();
            break;
            case 4:
            i=1;
            break;
            default:
            printf("choose the perfect choice");
        }
    }
}

//OUTPUT:
1.push
2.pop
3.display
4.exit
 enter the chioce:1
 enter the data:9
 1.push
2.pop
3.display
4.exit
 enter the chioce:1
 enter the data:8
 1.push
2.pop
3.display
4.exit
 enter the chioce:1
 enter the data:7
 1.push
2.pop
3.display
4.exit
 enter the chioce:3
 9 8 7
1.push
2.pop
3.display
4.exit
 enter the chioce:2
 the deleted num is9
1.push
2.pop
3.display
4.exit
 enter the chioce:3
 8 7
