#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *head=NULL;
void traversing()
{
    Node *ptr=ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data;
         ptr=ptr->next;
    }
}
int main()
{
    cout<<"Traversal of array"<<endl;
    struct *second,*next,*third,*fourth;
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=54;
    third->next=fourth;
    fourth->next=NULL;
    traversing();

}
