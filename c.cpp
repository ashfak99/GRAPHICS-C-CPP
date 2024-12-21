#include<stdio.h>
#include<conio.h>
#include<windows.h>

# define MAX 10

struct stack
{
    int arr[MAX];
    int top;
};

void initstack(struct stack *);
void push(struct stack *, int item);
int pop (struct stack *);
 
int main(int argc, char const *argv[])
{
    struct stack s;
    int i;
    system ("cls");
    initstack(&s);
    push(&s,11);
    push(&s,23);
    push(&s,-8);
    push(&s,16);
    push(&s,27);
    push(&s,14);
    push(&s,20);
    push(&s,39);
    push(&s,2);
    push(&s,15);
    push(&s,7);

    i= pop  ( &s);
    if (i!=NULL)
    {
        printf("Item popped : %d\n",i);
    }
    
    return 0;
}
void initstack (struct stack *s)
{
    s->top=-1;

}
void push(struct stack *s, int item)
{
    if (s->top==MAX -1)
    {
        printf("Stack is full.\n");
        return;
    }
    s->top++;
    s->arr[s->top]=item;
}
int pop(struct stack *s)
{
    int data;
     if (s->top==-1)
     {
        printf("Stack is Empthy.\n");
        return NULL;
     }
     data =s->arr[s->top];
     s->top--;
     return data;
     
}