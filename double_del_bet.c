#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void printlist(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

struct node *head = NULL;
struct node *tail = NULL;

void create(int data)
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->prev = NULL;
    newnode->data = data;
    newnode->next = NULL;

    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        tail = newnode;
    }
}

void delete_inbetween(int pos)
{
  
    if (pos == 1)
    {
        printf("Invalid position.\n");
    }
    else
    {
        struct node *temp = head;
        int i;
        for (i = 1; i < pos  && temp != NULL; i++)
        {
            temp = temp->next;
        }

        if (temp == NULL)
        {
            printf("Invalid position.\n");
        }
        else
        {
           temp = head->next;
           temp->next->next->prev = temp;
           temp->next= temp->next->next;
        }
    }
}

int main()
{
    int n, i;
    printf("Enter the size: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int data;
        printf("Enter the data: ");
        scanf("%d", &data);
        create(data);
    }

    printf("Linked List: ");
    printlist(head);

    int pos;
    printf("Enter the position : ");
    scanf(" %d", &pos);

    delete_inbetween( pos);
    printf("Linked List after deletion: ");
    printlist(head);

    return 0;
}


/// output:
Enter the size: 5
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Linked List: 1 2 3 4 5 
Enter the position : 3
Linked List after deletion: 1 2 4 5 
