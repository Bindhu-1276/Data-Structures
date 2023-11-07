#include<stdio.h>
int a[5];
int top = -1;
void push(int data)
{
    if(top==4)
    {
        printf("top is over flow:");
    }
    else
    {
        top ++;
        a[top] = data;
    }
}
void pop()
{
    if(top == -1)
    {
        printf("stack is NULL:");
    }
    else
    {
        printf("deleted element %d\n",a[top]);
        top--;
    }
    
}
void display()
{
    if(top==-1)
    {
        printf("stack is underflow:");
    }
    else
    {
        for(int i=0;i<=top;i++)
        printf(" %d",a[i]);
    }
    printf("\n");
}
int main()
{
    int i =1;
    int choice;
    while(i!=0){
    printf("\n1.push\n2.pop\n3.diaplay\n4.exit \n enter the choice:");
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
        pop ();
        break;
        case 3:
        display();
        break;
        case 4:
        i=0;
        break;
        default:
        printf("enter the better choice:");
    }
    }
}

//OUTPUT:
1.push
2.pop
3.diaplay
4.exit 
 enter the choice:1
 enter the data:9
 1.push
2.pop
3.diaplay
4.exit 
 enter the choice:1
 enter the data:8
 1.push
2.pop
3.diaplay
4.exit 
 enter the choice:1
 enter the data:7
 1.push
2.pop
3.diaplay
4.exit 
 enter the choice:3
 9 8 7

1.push
2.pop
3.diaplay
4.exit 
 enter the choice:2
 deleted element 7

1.push
2.pop
3.diaplay
4.exit 
 enter the choice:3
 9 8

1.push
2.pop
3.diaplay
4.exit 
 enter the choice:
