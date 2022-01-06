#include <algorithm>
#include <iostream>
using namespace std;

//           making struct

struct stack
{
    int size;
    int *arr;
    int top;
};



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

void push(struct stack *sptr, int val)
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
    };
}


                // pop function 

void pop(struct stack *sptr)
{
    int res = isEmpty(sptr);
    if (res == 1)
    {
        cout << "Stack is empty, Can't pop any element" << endl;
    }
    else
    {
        sptr->top--;
    }
}



                // driver function 

main()
{
    // Making a stack
    struct stack *s;
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 5;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    pop(s);
    push(s, 68);
    push(s, 30);
    push(s, 23);
    push(s, 57);
    pop (s);
    push(s, 2);
    push(s, 34);


            // accessing of stack element 
    for (int i = 0; i <= s->top; i++)
    {
        cout << s->arr[i] << endl;
    }
}
