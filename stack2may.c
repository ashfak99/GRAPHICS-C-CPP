#include<stdio.h>
#include<conio.h>
#include<windows.h>
#define MAX 10
struct alam
{
    int arr[MAX];
    int top;
};
void initstack(struct stack*);
void push(struct stack*,int item);
int pop(struct stack*);

int main()
{
    struct alam a;
    int i;
    system("cls");
    initstack(&a);
    push(&a,11);
    push(&a,20);
    push(&a,22);
    push(&a,45);
    push(&a,-23);
    i=pop(&a);
    if(i!=NULL)
    printf("Item popped: %d\n",i);
    if(i!=NULL)
    printf("Item popped: %d\n",i);
    if(i!=NULL)
    printf("Item popped: %d\n",i);
    if(i!=NULL)
    printf("Item popped: %d\n",i);
    if(i!=NULL)
    printf("Item popped: %d\n",i);
    return 0;
}
void initstack(struct alam *a)
{
    a->top=-1;
}
void push(stack alam *a,int item)
{
    if (a->top==MAX-1)
    {
        printf("Stack if full\n");
        return;
    }
    a->top++;
    a->arr[a->top]=item;
}
int pop(struct alam *a)
{
int data;
if (a->top==-1)
{
    printf("Stack is empty\n");
    return NULL;
}
data=a->arr[a->top];
a->top--;
return data;
}