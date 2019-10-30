#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define BLANK ' '
#define TAB '\t'
#define MAX 50
void push(long int symbol);
long int pop();
void inftopre();
long int evalpre();
int priority(char symbol);
int isempty();
int whitespace(char symbol);
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
    printf("Enter infix : ");
    gets(infix);
    inftopre();
    printf("prefix is :  %s \n",prefix);
    value=evalpre();
    printf("value of expression : %d \n",value);
}
void inftopre()
{
    unsigned int i,p=0;
    char next;
    char symbol;
    strrev(infix);
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        if(!whitespace(symbol))
        {
            switch(symbol)
            {
                case ')':
                push(symbol);
                break;

                case'(':
                while((next=pop())!=')')
                        prefix[p++]=next;
                        break;

                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
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
    prefix[p]='\0';
    strrev(prefix);
}
int priority(char symbol)
{
    switch(symbol)
    {
        case '(':
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
        printf("Stack overflow \n");
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
int whitespace(char symbol)
{
    if(symbol==BLANK||symbol==TAB)
        return 1;
    else
        return 0;

}
long int evalpre()
{
        long int a,b,temp,result;
        unsigned int i;
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
                        temp=a+b;break;
                    case '-':
                        temp=a-b;break;
                    case '*':
                        temp=a*b;break;
                    case '/':
                        temp=a/b;break;
                    case '%':
                        temp=a%b;break;
                    case '^':
                        temp=pow(a, b);
                }
                push(temp);
            }
        }
        result=pop();
        return result;
}
