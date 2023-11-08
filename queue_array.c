#include<stdio.h>
#define size 5
int queue[size];
int f = -1; // intitially front is null
int r = -1; //intially rare is null
\\inserting the numbers
void enque(int data)
{
    if(size == -1)
    {
        printf("stack is underflow");
        return;
    }
    else if(f==-1)
    {
        f++;
    }
    r++;
    queue[r] = data;
}
//deleting the numbers
void deque()
{
    if(f==-1 || f>r)
    {
        printf("stack is underflow");
    }
    else
    {
        printf("the deleted element is:",queue[f]);
        f++;
    }
}
//displaying the numbers
void display()
{
    if(f>r)
    {
        printf("queue is empty:");
    }
    for(int i=0;i<=r;i++)
    {
        printf("%d\n",queue[i]);
    }
}
int main()
{
    enque(10);
    enque(20);
    enque(30);
    display();
    deque();
    display();
}


#output:
10
20
30
the deleted element is:10
20
30
