/// creating a linked list ///
#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head,*tail = NULL;
void insert(int data)
{
    struct node *newnode =(struct node*)malloc(sizeof(struct node));
    newnode -> data = data;
    newnode -> next = NULL;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        tail -> next = newnode;
        tail = newnode;
    }
    return;
}
void display()
{
    struct node *current = head;
    if(head == NULL)
    {
        printf("empty list:");
        return;
    }
    printf("node of single linked list;\n");
    while(current != NULL)
    {
        printf("%d\n", current -> data);
        current = current -> next;
    }
    printf("\n");
}
int main()
{
    insert(10);
    insert(20);
    insert(30);
    display();
    return 0;
}
