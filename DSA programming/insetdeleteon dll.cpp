#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next, *prev;
};
Node *start = NULL;

void insertAtBeg(int d)
{
    Node *newNode = new Node;
    newNode->data = d;
    newNode->prev = NULL;
    if (start == NULL)
    {
        newNode->next = start;
        start = newNode;
    }
    else
    {
        newNode->next = start;
        start->prev = newNode;
        start = newNode;
    }
}

void insertAtEnd(int d)
{
    Node *newNode = new Node;
    newNode->data = d;
    newNode->next = NULL;
    if (start == NULL)
    {
        start = newNode;
        newNode->prev = NULL;
    }
    Node *ptr = start;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = newNode;
    newNode->prev = ptr;
}

void deleteAtBeg()
{
    if (start = NULL)
    {
        cout << "Underflow";
    }
    else
    {
        Node *ptr = start;
        start = start->next;
        if (start != NULL)
        {
            start->prev = NULL;
            delete ptr;
        }
    }
}

void deleteAtEnd()
{
    if (start != NULL)
    {
        cout << "Underflow";
    }
    else
    {
        Node *ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        if (ptr->prev != NULL)
        {
            ptr->prev->next = NULL;
            delete ptr;
        }
        else
        {
            start = NULL;
            delete ptr;
        }
    }
}

void print()
{
    Node *ptr = start;
    while (ptr != NULL)
    {
        cout << ptr->data << ",";
        ptr = ptr->next;
    }
}
int main()
{
    insertAtBeg(11);
    insertAtBeg(47);
    insertAtBeg(23);
    insertAtBeg(17);
    insertAtEnd(13);
    insertAtEnd(5);
    insertAtEnd(67);
    print();

    return 0;
}
