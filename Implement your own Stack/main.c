#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <limits.h>
#include "typedef.h"


#define Overflow (INT_MAX)
#define StackEmpty (INT_MIN)
#define Empty (-1)
#define StackSize 255

int32_t stack[StackSize];
int32_t top = Empty;

/**
function to push in a linear stack
input [value]
output [value pushed in the stack]
**/
int32_t push(int32_t value){
if (top >= StackSize-1)
    {
    printf ("Stack Overflow\n");
    exit(0);
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
	for(parenthesesIndex=0;expression[parenthesesIndex]!='\0';parenthesesIndex++)
	{
		if((expression[parenthesesIndex]=='{') || (expression[parenthesesIndex]=='(') || (expression[parenthesesIndex]=='['))
        {
			push(expression[parenthesesIndex]);
        }
		else if((expression[parenthesesIndex]=='}') || (expression[parenthesesIndex]==')') || (expression[parenthesesIndex]==']'))
		{

        if(expression[parenthesesIndex] == '}' && stack[top] == '{')
                pop();
        if(expression[parenthesesIndex] == ')' && stack[top] == '(')
                pop();
        if(expression[parenthesesIndex] == ']' && stack[top] == '[')
                pop();
        }
	}
	if(top==Empty)
		return 1;
	else
		return 0;
}


int32_t main ()
{
    uint8_t* expression="[{}{{()}}]";
	if(checkBalancedParentheses(expression))
	    printf("Balanced");
	else
	    printf("Not Balanced");
	    return 0;
}
