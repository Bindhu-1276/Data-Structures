#include<stdio.h>
struct node{
             int data;
             struct node *next;
             struct node *prev;
                     };

struct node *top = NULL;
int main(){
	int ch=0;
    int item;
    int pos;
    while (1){	
    printf("1.Push 2.Pop 3.Display 4.Exit\n");
    printf("enter choice:");
    scanf("%d",&ch);            
    switch(ch){
    	case 1: printf("enter:");
		        scanf("%d",&item);
    	        push(item);
    	        break;
	    case 2: pop();
	            break;
		case 3: display();
			    break;
		case 4: exit(0);
            		
			}
		}
	return 0;
}
void push(item){
	struct node *newnode = (struct node *)malloc(sizeof(struct node));
	newnode -> data = item;
    newnode -> next = NULL;
    newnode -> prev = NULL;
	if(top == NULL){
		top = newnode;
	    
	}
	else{
		newnode->prev = top;
		top -> next = newnode;
		top = newnode;
	}
	
}
void pop(){
	if (top == NULL){
		printf("stack underflow\n");
	}
	else{
		struct node *temp = (struct node *)malloc(sizeof(struct node));
		temp = top->prev;
		top->prev = NULL;
		top = temp;
		top -> next = NULL;

	}
	
}
void display(){
	int i;
	struct node *current = top;
	while(current != NULL){
	
	  printf("%5d\t", current->data);
	   printf("%5ld\t",(long)current->prev);
	  printf("%5ld\t",(long)current->next);
	  printf("%5ld\t",(long)current);
	  printf("\n");
	  current = current ->prev;
	}
	
	
}
