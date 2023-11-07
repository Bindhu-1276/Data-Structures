#include <stdio.h>
#include<stdlib.h>
struct stack
{
    int data;
    struct stack *next;
};
struct stack *top;
// pushing the element
void push(int data)
{
    struct stack *new = (struct stack*)malloc(sizeof(struct stack));
    new->data = data;
    new->next= NULL;
    if(top == NULL)
    {
        top = new;
    }
    else
    {
        new->next=top;
        top = new;
    }
}
//popping the element
void pop()
{
    if(top == NULL)
    {
        printf("stack is empty:\n");
    }
    else
    {
        struct stack *temp;
        temp= top->next;
        top->next = NULL;
        top = temp;
    }
}
//displaying the element
void display()
{
    struct stack *temp = top;
    while(temp!=NULL)
    {
        printf("%5d",temp->data);
        temp = temp->next;
    }
}
int main()
{
    int i=1;
    while(i!=0){
    int choice;
    printf("\n1.push\n2.pop\n3.display\n4.exit\n enetr choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            int data;
            printf("enter the data:");
            scanf("%d",&data);
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3: display();
        break;
        case 4:
        i=0;
        break;
        default:
        printf("enter the correct choice:");
    }
    }
}



//OUT PUT:
1.push
2.pop
3.display
4.exit
 enetr choice:1
 enter the data:9
 1.push
2.pop
3.display
4.exit
 enetr choice:1
 enter the data:8
 1.push
2.pop
3.display
4.exit
 enetr choice:1
 enter the data:7
 1.push
2.pop
3.display
4.exit
 enetr choice:3
 7    8    9
1.push
2.pop
3.display
4.exit
 enetr choice:2
 1.push
2.pop
3.display
4.exit
 enetr choice:3
 8    9
1.push
2.pop
3.display
4.exit
 enetr choice:
