#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

void printlist(struct node *ptr,int max_nodes)
{
    int nodes_printed =0;
    while (ptr != NULL && nodes_printed< max_nodes)
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
        nodes_printed++;
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

void circular_list()
{
  if(head == NULL)
  {
      printf("list is empty:");
  }
  else
  {
      head = head->next;
      head->prev =tail;
      tail->next = head;
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
    printlist(head,n);

   
    circular_list();
    printf("Linked List after circulating: ");
    printlist(head,n);

    return 0;
}

// output:
Enter the size: 5
Enter the data: 1
Enter the data: 2
Enter the data: 3
Enter the data: 4
Enter the data: 5
Linked List: 1 2 3 4 5 
Linked List after circulating: 2 3 4 5 2 
