#include<iostream>
using namespace std;
struct node
{
    node *next;
    int data;

};
struct node* head=NULL;
int print()
{
    node *ptr=new node;
    ptr=head;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
        cout<<ptr->data;
    }
}

int main()
{
    struct node *second=new node;
    struct node *third=new node;
    struct node *fourth=new node;
    head->data=45;
    head->next=second;
    second->data=65;
    second->next=third;
    third->data=78;
    third->next=fourth;
    fourth->data=22;
    fourth->next=NULL;
    print();
    return 0;
}
