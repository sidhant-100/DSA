#ifndef STACK_H
#define STACK_H
#define max_size 100

typedef struct{
     int data[max_size];
     int top;
}Stack;

void createstack(Stack* stack);
int isempty(Stack* stack);
int iffull(Stack* stack);
void push(Stack* stack, int item);
int pop(Stack* stack);
#endif