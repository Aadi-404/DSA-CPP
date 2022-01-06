#include <iostream>
#include <string>
#include<array>
using namespace std;

struct stack
{
    int top;
    int size;
    char *arr;
};

int isOperator(char ch)
{
    if (ch == '*' || ch == '/' || ch == '+' || ch == '-')
    {
        return 1;
    }

    else
        return 0;
}
int precedence(char ch)
{
    cout << "precedence check for :" << ch << endl;
    if (ch == '*' || ch == '/')
    {
        return 3;
    }

    else if (ch == '+' || ch == '-')
    {
        return 2;
    }
    else
        return 0;
}
int stackTop(struct stack *s)
{

    char stackTopChar = s->arr[s->top];
    return stackTopChar;
}

//  Is full

bool isFull(struct stack *sptr)
{
    if (sptr->top == (sptr->size - 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

// Is empty

bool isEmpty(struct stack *sptr)
{
    if (sptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// push function

void push(struct stack *sptr, char val)
{

    int res = isFull(sptr);
    if (res == 1)
    {
        cout << "Stack is full. Can't PUSH element : " << val << endl;
    }
    else
    {
        sptr->top++;
        sptr->arr[sptr->top] = val;
        cout << "Pushed element in stack :" << sptr->arr[sptr->top] << endl;
    };
}

// pop function

char pop(struct stack *sptr)
{
    int res = isEmpty(sptr);
    if (res == 1)
    {
        cout << "Stack is empty, Can't pop any element" << endl;
    }
    else
    {
        char ch = sptr->arr[sptr->top];
        cout << "Popped element from stack :" << sptr->arr[sptr->top] << endl;
        sptr->top--;
        return ch;
    }
}

char *infixToPostfix(char *infix)
{

    struct stack *s = (struct stack *)malloc(sizeof(struct stack *));
    s->size = 10;
    s->top = -1;
    s->arr = (char *)malloc(s->size * (sizeof(char)));
    char *postfix = (char *)malloc((sizeof(infix) + 1) * (sizeof(char)));
    int i = 0, j = 0;
    while (infix[i] != '\0')
    {
        if (isOperator(infix[i]))
        {
            if (precedence(infix[i] > precedence(stackTop(s))))
            {
                push(s, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(s);
                j++;
            }
        }
        else
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
    }

    while (!isEmpty(s))
    {
        postfix[j] = pop(s);
        j++;
    }
    postfix[j] == '\0';
    return postfix;
}

main()
{
    char *infix = "x/a+b-z*c";

    cout << "Postfix is :" << infixToPostfix(infix);
}
