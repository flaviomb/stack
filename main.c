#include<stdio.h>
#include<stdlib.h>
#include"stack.h"

int main(){
	Stack *s;
	int v =5;
	int x;
	float t = 6;
	s = init();
	push(v,s);
	push(v,s);
	push(v,s);
	push(v,s);
	push(v,s);
	print_stack(s);

	printf("Pop operation: %d\n", pop(s));
	print_stack(s);

	printf("Pop operation: %d\n", pop(s));
	print_stack(s);

	printf("Pop operation: %d\n", pop(s));
	print_stack(s);

	printf("Pop operation: %d\n", pop(s));
	print_stack(s);

	printf("Pop operation: %d\n", pop(s));
	print_stack(s);
	
	printf("Pop operation: %d\n", pop(s));

//	print_stack(s);
}
