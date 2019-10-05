/*Program to demonstrate working of stack using array*/
#include<stdio.h>
#define MAX 10  /*define maximum stack size as 10*/
typedef struct stack{
	int a[MAX];
	int i;
}stack;
/* User to call init before calling other functions.
 * User to check isempty() before calling pop()
 * User to check isfull() before calling push()
 */
/*Associated stack operations*/
void init(stack *s) {		/*init sets beginning index to 0*/
	s->i = 0;
}
void push(stack *s, int no) {
	s->a[s->i++] = no;
}
int pop(stack *s) {
	int t;
	t = s->a[s->i - 1];
	s->i--;
	return t;
}
int isempty(stack *s) {
	return s->i == 0;
}
int isfull(stack *s) {
	return s->i == MAX;
}
/*The code for testing the stack operations will be written below this*/
int main(){
		stack s;
		init(&s);
		int option;
		int element;
		while(1){
			printf("Select Operation :\n");
			printf("1. Enter 1 to Push\n");
			printf("2. Enter 2 to Pop\n");
			printf("3. Enter 3 to Exit\n");
			scanf("%d", &option);
			switch(option){
				case 1:
					if(!isfull(&s)){
						printf("Enter element to push : ");
						scanf("%d", &element);
						push(&s, element);
					}
					else{
						printf("Cannot push elements, stack is full. Pop some elements first.\n");
					}
					break; 
				case 2:
					if(!isempty(&s)){
						printf("Popped element : %d\n", pop(&s));
					}
					else{
						printf("Cannot pop elements, stack is empty. Push some elements first\n");
					}
					break;
				case 3:
					return 0;
					break;
				}
		}
		return 0;
}  
