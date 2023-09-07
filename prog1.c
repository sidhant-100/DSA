#include<stdio.h>
#include "postfix.h"


#include "stack.h"

int main()
{ int n,ret;
char expression[30];
int result;
Stack s1;
   do
   {
   	printf("\nenter 1 for postfix evaluation \nenter 0:for exit");
   	scanf("%d",&n);
   	
   	switch(n)
   	{ 
   	 
		case 1:   
        printf("enter the postfix expression\n");
        scanf("%s",&expression);
     result= evaluate(expression);  
printf("Result= %d\n", result);
break;  
   	  case 0:break;
   	  default: printf("\n\nInvalid go home\n\n");
	   }
   }while(n);
   return 0;
}