#include<stdio.h>
#include<stdlib.h>
#define max 5
int f = -1;
int r = -1;
int queue[max];
int top = -1;
int top2 = -1;
int a[max];
int arr[max];

void enqueue(int item){
	if (r==max-1){
		printf("queue overflow");
	}
	else if(f==-1){
		f++;
	}
	r++;
	queue[r]=item;
	
}
void stack1(int item){
        if (top ==max-1){
        printf("stack overflow\n");
	}
	else{
          top = top +1;
	     a[top]=item;
	}
}
void dequeue(){
	if (f==-1 || f>r){
		printf("Queue is empty\n");
		return ;
	}
	printf("element deleted: %d\n",queue[f]);
    stack1(queue[f]);
	f++;
	
}
void display(){
	if (f==-1 || f>r){
		printf("Queue is empty\n");
		return ;
	}
	int i;
	for(i=f;i<=r;i++){
		printf("%3d",queue[i]);
	}
	printf("\n");
}
void stack2(int item){
    if (top2 ==max-1){
        printf("stack overflow\n");
	}
	else{
          top2 = top2 +1;
	     arr[top2]=item;
	}
}

void stack1pop(){
	if (top == -1){
		printf("stack underflow\n");
	}
	else{
		int x;
		x = a[top];
		stack2(x);
		top--;
		printf("%d is deleted\n",x);
		
	}
    
}
void stack2pop(){
	if (top2 == -1){
		printf("stack underflow\n");
	}
	else{
		int x;
		x = arr[top2];
		top2--;
		printf("%d is deleted\n",x);
		
	}
    
}
int main(){
	int ch=0;
    int item;
    while (1){	
    printf("1.Enqueue 2.Dequeue 3.Display 4.stack1pop 5.stack2pop 6.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
		        scanf("%d",&item);
    	        enqueue(item);
    	        break;
	    case 2: dequeue();
	            break;
		case 3: display();
			    break;
		case 4: stack1pop();
		        break;
		case 5: stack2pop();
		        break;
		case 6: exit(0);
		
            		
			}
		}
	
}
