#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include "typedef.h"


#define Overflow (INT_MAX)
#define StackEmpty (INT_MIN)
#define Empty (-1)
#define Size 3
#define Start 0
#define OverflowError 0
#define StackIsEmpty 1
#define Checked 0
#define Stacked Size-1

int32_t stack[Size];
int32_t top = Empty;

/**
function to push in a linear stack
input [value]
output [value pushed into the stack]
**/
int32_t push(int32_t value){
if (top >= Stacked)
    {
    printf ("Stack Overflow\n");
    exit(OverflowError);
    return Overflow;
    }
else
{

}
    top++;
    stack[top] = value;
}


/**
function to pull from a linear stack
output [pulled form the stack
**/
int32_t pop (){
if (top == Empty)
{
return (StackEmpty);
}
  else
{

}
int32_t reuslt = stack[top];
top--;
return reuslt;
}


/**
function to check balanced parentheses [,{,( or not
parentheses type are [],{},()
input [ *expression >>> a pointer to uint8_t ]
**/
int32_t checkBalancedParentheses(uint8_t* expression)
{

	int32_t parenthesesIndex;
	for(parenthesesIndex=Start;expression[parenthesesIndex]!='\0';parenthesesIndex++)
	{
		if( ((expression[parenthesesIndex]=='{')) || ((expression[parenthesesIndex]=='('))  || ((expression[parenthesesIndex]=='[')) )
                push(expression[parenthesesIndex]);

       //else if( ((expression[parenthesesIndex]=='}')) || ((expression[parenthesesIndex]==')')) || ((expression[parenthesesIndex]==']' )))
              //  push(expression[parenthesesIndex]);


        if((expression[parenthesesIndex] == '}' && stack[top] == '{'))
            {
                pop();
            }
        if((expression[parenthesesIndex] == ')' && stack[top] == '('))
            {
                pop();
            }
        if( (expression[parenthesesIndex] == ']' && stack[top] == '[') ) //|| (expression[parenthesesIndex] == '[' && stack[top] == ']'))
            {
                pop();
            }
       // if( (expression[parenthesesIndex] == NULL) )
          //  break;

	}
	if(top==Empty)
		return StackIsEmpty;
	else
    {
        return Checked;
    }
printf("return");
}


int32_t main ()
{
    uint8_t* expression="[58*9*(25-8)+{8/7}]";
    if (expression == "" || expression == " ")
        printf("Please Enter An Expression To Check\n");

  //  if ( (expression == "]") || (expression == ")") || (expression == "}") )
       // printf("Not Balanced");


    else if(checkBalancedParentheses(expression))
	    printf("Balanced");

	else
	    printf("Not Balanced");
}
