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

void delete_pos1()
{
  if(head == NULL)
  {
      printf("linked list is empty:");
      return;
  }
  struct node *temp = head;
  if(head!=NULL)
  {
    head = head->next;
  }
  head->prev=NULL;
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

   
    delete_pos1( );
    printf("Linked List after deletion: ");
    printlist(head);

    return 0;
}


/// output:
Enter the size: 5
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Enter the data: 6
Linked List: 2 3 4 5 6 
Linked List after deletion: 3 4 5 6 
