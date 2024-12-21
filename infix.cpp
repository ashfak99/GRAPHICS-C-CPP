//Infix to prefix conversion
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<windows.h>

#define MAX 50
struct infix
{
    char target[MAX];
    char stack[MAX];
    char *s,*t;
    int top,l;

};
void initinfix(struct infix*);
void setexpr(struct infix*,char*);
void push(struct infix*,char);
char pop(struct infix*);
void convert(struct infix*);
int priority(char c);
void show(struct infix);
int main(int argc, char const *argv[])
{
    struct infix q;
    char expr[MAX];
    system("cls");
    initinfix(&q);
    printf("Please enter the expression in infix form:\n");
    gets(expr);
    setexpr(&q,expr);
    convert(&q);
    printf("The prefix expression is:\n");
    show(q);

    return 0;
}
void initinfix(struct infix *pq)
{
    pq->top=-1;
    strcpy(py->target,"");
    strcpy(pq->stack,"");
    pq->l-0;
}
void setexpr(struct infix *pq,char *str)
{
    pq->s=str;
    strrev(pq->s);
    pq->l=strlen(pq->s);
    *(pq->target+pq->l)='\0';
    pq->t=pq->target+(pq->l-1);
}
void push(struct infix *pq, char c)
{
    if(pq->top==MAX-1)
     printf("Stack is full.\n");
     else
     {
        pq->top++;
        pq->stack[pq->top]=c;
     }
     
}
char pop(struct infix *pq)
{
    if(pq->top==-1)
    {
        printf("Stack is empty\n");
        return -1;
    }
    else
    {
        char item=pq->stack[pq->top];
        pq->top--;
        return item;
    }
}
void convert(struct infix *pq)
{
    char opr;
    while(*(pq->s))
    {
        if (*(pq->s)==''||*(pq->s)=='\t')
        {
            pq->s++;
            continue;
        }
        if (isdigit(*(pq->s))||isalpha(*(pq->s)))
        {
            while(isdigit(*(pq->s))||isalpha(*(pq->s)))
            {
                *(pq->t)=*(pq->s);
                pq->s++;
                pq->t--;
            }
        }
        
        
    }
}

