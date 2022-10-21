#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *front = NULL;
node *rear = NULL;

void enqueue(int item)
{

    node *newNode = new node;
    newNode->data = item;
    if (front == NULL)
    {
        front = newNode;
        rear = newNode;
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
void dequeue()
{
    if (front == NULL)
    {
        cout << "Underflow" << endl;
    }
    else
    {
        if (front == rear)
        {
            front = NULL : rear = NULL;
        }
        else
        {
            node *p = new node;
            p = front;
            front = front->next;
             delete (p);
        }
    }
   
}
int main()
{
    enqueue(10);
    enqueue(20);
    cout << front->data;
    dequeue();
    enqueue(30);
    dequeue();
    enqueue(100);
    cout << front->data;
}
