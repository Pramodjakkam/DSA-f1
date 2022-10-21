#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *pre, *next;
};

Node *start = NULL;
void insertAtBeg(int d)
{
    Node *newNode = new Node;
    newNode->data = d;
    newNode->pre = NULL;
    if (start != NULL)
    {
        newNode->next = start;
        start->pre = newNode;
        start = newNode;
    }
    else
    {
        newNode->next = NULL;
        start = newNode;
    }
}

void print()
{
    Node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << ", ";
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *start = new Node;
    struct Node *second = new Node;
    struct Node *third = new Node;
    struct Node *fourth = new Node;

    start->data = 43;
    start->next = second;
    second->data = 54;
    second->next = third;
    third->data = 98;
    third->next = fourth;
    fourth->data = 23;
    fourth->next = NULL;
    print();
    insertAtBeg(25);
    // insertAtBeg(20);
    // insertAtBeg(27);
    // insertAtBeg(83);
    print();
    return 0;
}
