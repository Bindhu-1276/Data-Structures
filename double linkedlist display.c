// double linked list creation and display

#include <stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head , *tail = NULL;
void createlist(int data)
{
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode ->prev = NULL;
    newnode ->next = NULL;
    newnode->data = data;
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = tail->next;
    }
}
void display()
{
    struct node *current=head;
    while (current!=NULL)
    {
        printf("data: %d , address: %p\n",current->data,(void*)current);
        current = current->next;
    }
    printf("\n");
}
int main()
{
    int n,i;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int data;
        printf("enter the data;");
        scanf("%d",&data);
        createlist(data);
    }
    printf("the elements are:\n ");
    display();
    printf("\n");
    
    struct node *current = head ;
    while(current != NULL)
    {
        struct node* temp = current;
        current = current->next;
        printf("\n");
    }
   return 0;
}


output:
enter the size:5
enter the data;1
enter the data;2
enter the data;3
enter the data;4
enter the data;5
the elements are:
 data: 1 , address: 0x7d0ac0
data: 2 , address: 0x7d0ae0
data: 3 , address: 0x7d0b00
data: 4 , address: 0x7d0b20
data: 5 , address: 0x7d0b40

