#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
using namespace std;
void infix_postfix(char infix[20]);
int evaluate(char x,int op1,int op2);
void eval(char postfix[]);
int pre(char x);
struct stack
{
int a[20];
int top;
};
typedef struct stack stack;
void init(stack *s)
{
s->top=-1;
}
int isfull(stack *s)
{
if(s->top==20)
return 1;
else
}
return 0;
int isempty(stack *s)
{
if(s->top==-1)
return 1;
else
}
return 0; 
void push(stack *s,char x)
{
s->top=s->top+1;
s->a[s->top]=x;
}
int pop(stack *s)
{
char x;
x=s->a[s->top];
s->top=s->top-1;
return x;
}
void main()
{
clrscr();
char infix[20];
cout<<"Enter infix expression:";
cin>>infix;
infix_postfix(infix);
getch();
}
void infix_postfix(char infix[20])
{
stack *s;
char postfix[20],x,y;
int i,j=0;
init(s);
for(i=0;infix[i]!='\0';i++)
{
y=infix[i];
if((y>='a' && y<='z') || (y>='A' && y<='Z'))
{
postfix[j++]=y;
}
else if(y=='(')
{
push(s,y);
}
else if(y==')')
{
while((x=pop(s))!='(')
postfix[j++]=x;
}
else
}
{
while(pre(y)<=pre(s->a[s->top])&&!isempty(s))
{
postfix[j++]=pop(s);
}
push(s,y);
}
  while(!isempty(s))
{
postfix[j++]=pop(s);
}
}
int pre(char x)
{
postfix[j]='\0'; cout<<postfix; eval(postfix);
if(x=='(') return 0;
else if(x=='+' || x=='-')
return 1;
else if(x=='/' || x=='*' || x=='%')
return 2;
else
return 3;
}
void eval(char postfix[])
{
stack s;
char x;
int op1,op2,val,i;
init(&s);
for(i=0;postfix[i]!='\0';i++)
{
x=postfix[i];
if(isalpha(x))
{
cout<<"\nEnter the value of:"<<x;
cin>>val;
push(&s,val);
}
else
{
op2=pop(&s);
op1=pop(&s);
val=evaluate(x,op1,op2);
push(&s,val);
}
}
val=pop(&s);
cout<<"\nValue of expression:"<<val;
}
int evaluate(char x,int op1,int op2)
{
switch(x)
{
case '+': return(op1+op2);
case '-': return(op1-op2);
case '*': return(op1*op2);
case '/': return(op1/op2);
case '%': return(op1%op2);
}
} 
