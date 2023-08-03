#include<stdio.h>
int main()
{
    int num;
    do{
    printf("Stack\n1)create stack\n2)isempty\n3)iffull\n4)push\n5)pop");
    scanf("%d",&num);
      switch(num)
      {
        case 1:
        createstack();
        break;

        case 2:
        isempty();
        break;

        case 3:
        isfull();
        break;

        case 4:
        push();
        break;

        case 5:
        push();
        break;
      }
      while(num); 

    }