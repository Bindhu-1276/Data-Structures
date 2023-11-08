#include <stdio.h>
#include<stdlib.h>
struct queue
{
    int data;
    struct queue *next;
};
struct queue *r1 = NULL;
struct queue *f1=NULL;
struct queue *r2 = NULL;
struct queue *f2 = NULL;

struct queue *top;
// 
void create1(int data)
{
    struct queue *new = (struct queue*)malloc(sizeof(struct queue));
    new->data=data;
    new->next=NULL;
    if(f1==NULL && r1==NULL)
    {
        f1=new;
        r1=new;
    }
    else
    {
        r1->next = new;
        r1 = new;
    }
}
// 
void rev(int data)
{
    struct queue *new = (struct queue*)malloc(sizeof(struct queue));
    new->data = data;
    new->next = NULL;
    if(f2==NULL && r2==NULL)
    {
        r2=new;
        f2=new;
    }
    else
    {
        r2->next = new;
        r2 = new;
    }
}
//
void operations()
{
    struct queue *temp =f1;
    do
    {
        struct queue *temp = f1;
        while(temp->next!=r1)
        {
            temp = temp->next;
        }
        rev(temp->next->data);
        r1=temp;
    }
    while(f1!=r1);
    {
        rev(temp->data);
    }
}
//
void deque()
{
   while(f2!=NULL)
   {
       printf("the stack is deleted %d\n",f2->data);
       f2=f2->next;
   }
}
//
void display()
{
    struct queue *temp = f1;
    while(temp!=NULL)
    {
        printf("%d\t",&temp->data);
        temp = temp->next;
    }
}
//
int main()
{
    create1(10);
    create1(20);
    create1(30);
    create1(40);
    operations();
    display();
    deque();
}
