//INFIX TO PREFIX
 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 #include<math.h>
 #define BLANK ' '
 #define TAB '\t'
 #define MAX 50
 void push(long int symbol);
 long int pop();
 void prefix_to_infix();
 long int eval_pre();
 int priority(char symbol);
 int isempty();
 int white_space(char symbol);
 char infix[MAX],prefix[MAX];
 long int stack[MAX];
 int top;

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}

 int main()
 {
 	long int value;
 	top=-1;
 	printf("Enter the infix:\t\n");
 	gets(infix);
 	prefix_to_infix();
 	strrev(prefix);
 	printf("Prefix:\t%s\n",prefix);
 	value=eval_pre();
 	printf("The value after evaluation is %d\n",value);
}

void prefix_to_infix()
{
	unsigned int i,p=0;
	char next;
	char symbol;
	strrev(infix);
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		if(!white_space(symbol))
		{
			switch(symbol)
			{
				case')':
					push(symbol);
					break;
				case'(':
					while((next=pop())!=')')
					prefix[p++]=next;
					break;
				case '^':
				case '/':
				case '%':
				case '*':
				case '+':
				case '-':
					while(!isempty()&&priority(stack[top])>priority(symbol))
					prefix[p++]=pop();
					push(symbol);
					break;
					default:
							prefix[p++]=symbol;
			}
		}
	}
	while(!isempty())
			prefix[p++]=pop();
			prefix[p++]='\0';
}
int priority(char symbol)
{
	switch (symbol)
	{
		case ')':
			return 0;
		case '+':
		case '-':
			return 1;
		case '*':
			case '/':
				case '%':
				return 2;
		case '^':
			return 3;
		default :
		return 0;
	}
}

void push(long int symbol)
{
	if(top>MAX)
	{
		printf("Stack Overflow");
		exit(1);
	}
	stack[++top]=symbol;
}
long int pop()
{
	if(isempty())
	{
		printf("Stack Underflow\n");
		exit(1);
	}
	return(stack[top--]);
}
int isempty()
{
	if(top==-1)
		return 1;
	else
		return 0;
}
int white_space(char symbol)
{
	if(symbol == BLANK||symbol == TAB)
		return 1;
		else 
		return 0;
}
long int eval_pre(){
long int a,b,temp,result;
int i;
strrev(prefix);
	for(i=0;i<strlen(prefix);i++)
{
	if(prefix[i]<='9'&&prefix[i]>='0')
		push(prefix[i]-'0');
	else
	{
		a=pop();
		b=pop();
		switch(prefix[i])
	{
		case '+':
				temp=a+b;
				break;
		case '-':
			temp=a-b;
				break;
		case '*':
			temp=a*b;
				break;
		case '/':
				temp=a/b;
				break;
		case '%':
				temp=a%b;
				break;
		case '^':
				temp=pow(a,b);
				break;
		}
		push(temp);
	}
}
result=pop();
return result;
}
