#include <stdio.h>
#include <string.h>
int isop(char n);
void push(int l);
int pop();
int stack[15];
int top = -1;

void main()
{	int i;
	int a,b,temp;
	char post[50];
	printf("Please input a valid postfix expression\n");
	gets(post);
	
	for(i=0;post[i] != '\0';i++)
	{
		if (isop(post[i]) == 0)
		{
			push(post[i]-'0');
		}
		else if (isop(post[i]) == 1)
		{
			a = pop();
			b = pop();
			temp=a+b;
			push(temp);
		}
		else if (isop(post[i]) == 2)
		{
			a = pop();
			b = pop();
			temp=b-a;
			push(temp);
		}	
		else if (isop(post[i]) == 3)
		{
			a = pop();
			b = pop();
			temp=a*b;
			push(temp);
		}
		else if (isop(post[i]) == 4)
		{
			a = pop();
			b = pop();
			temp=a/b;
			push(temp);		
		}
		else 
			printf("invalid expression\n");
		printf("The result is %d:\n",temp);	
	}
	printf("The result is %d:\n",pop());	
			 	
}
void push(int k)
{
	
	stack[++top]=k;
}
int pop()
{
	if(top==-1)
	{
		printf("The stack is empty \n");
	}
	else
	{
	return stack[top--];
	}
}		
int isop(char a)
{
		if( a !='+' || a != '-' || a != '*' || a != '/')
		{	return 0;
		}		
		else 	
		{	switch (a)
			{	case '+': return 1;
				case '-': return 2;
				case '*': return 3;
				case '/': return 4;
			}		
		}
}  
			
