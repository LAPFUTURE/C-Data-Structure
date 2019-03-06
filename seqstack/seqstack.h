#include <stdio.h>
#define MAXSIZE 100
typedef int datatype;
typedef struct{
	datatype a[MAXSIZE];
	int top;
}sequence_stack;

void init(sequence_stack *st){
	st->top = 0;
}

int empty(sequence_stack st){
	return (st.top ? 0 : 1);//有则返回0，无则返回1 
} 

datatype read(sequence_stack st){
	if(empty(st)){
		printf("\n栈是空的!");
		exit(1);
	}else{
		return st.a[st.top-1];
	}
}

void push(sequence_stack *st,datatype x){
	if(st->top == MAXSIZE){
		printf("\n栈是满的!");
		exit(1); 
	}
	st->a[st->top] = x;
	st->top++;
}

void pop(sequence_stack *st){
	if(st->top == 0){
		printf("\n 栈是空的!");
		exit(1); 
	}
	st->top--;
}








