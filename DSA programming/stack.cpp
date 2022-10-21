#include <iostream>
#include <vector>
using namespace std;

int pop(int top)
{
    if (top == -1)
    {
        cout << "Underflow";
        exit(EXIT_SUCCESS);
    }
    else
    {
        top = top - 1;
    }
    return top;
}

int push(int stack[], int d, int top)
{
    if (top == 20)
    {
        cout << "Overflow";
    }
    else
    {
        top++;
        stack[top] = d;
    }
    return top;
}

int main()
{
    int stack[20], top = -1;
    top = push(stack, 25, top);
    top = push(stack, 2, top);
    top = push(stack, 43, top);
    top = push(stack, 31, top);
    top = push(stack, 23, top);
    top = push(stack, 7, top);
    cout << "We have " << stack[top] << " on " << top << " index" << endl;
    top = pop(top);
    top = pop(top);
    top = pop(top);
    cout << "We have " << stack[top] << " on " << top << " index";
    return 0;
}
