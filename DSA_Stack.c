// implementation of stack using array (LIFO) 
// by Aanchal Asnani


#include<stdio.h>

//globally defining the array and its size and the top variable so
// that it would be easily accessible for others function which are defined outside main

int A[10] , size = 10 , top = -1;

void push(int x) {
	
	if(top==size-1) {
		printf("STACK OVERFLOW\n");
	}
	else {
		
		A[++top] = x;
	}
}


int pop() {
	int x = -1;
	if(top == -1) {
		printf("STACK UNDERFLOW\n");
		
	}
	else {
		x = A[top];
		top--;
	}
	return x;
}

void display() {
	
	int i;
	printf("\nDISPLAYING STACK\n");
	for(i=0 ; i<=top ; i++) {
		printf("%d ",A[i]);
	}	
}

int main() {
	
	pop();
	push(10);
	push(20);
	push(30);
	push(40);
	printf("POP : %d ",pop());
	display();
	
	
}
