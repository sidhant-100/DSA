#include "stack.h"

void createstack(Stack* stack)
{
    stack->top=-1;
}
int isempty(Stack* stack)
{
    return stack->top==-1;
}
int iffull(Stack* stack)
{
    return stack->top == max_size;
}
void push(Stack* stack, int item)
{
    if(!isfull(stack)){
        stack->top++;
        stack->data[stack->top]= item;
    }
    else
    {
        printf("stack is full");
    }
}
int pop(Stack* stack)
{
    if(!isempty(stack)){
        int item =stack->data[stack->top];
        stack->top--;
        return item;
    }
    else{
        printf("stack is empty");
    }    

}