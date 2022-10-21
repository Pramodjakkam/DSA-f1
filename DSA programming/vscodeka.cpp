
#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node *head=new struct Node;
int insertatbeg(int item)
{
    struct Node *ptr=new struct Node ;
    ptr->data=item;
    ptr->next=head;
    head=ptr;
}
void traversing()
{
    struct Node *ptr=head;
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
         ptr=ptr->next;
    }
}
int main()
{
    int k;
    cout<<"Traversal of array"<<endl;
    struct Node *second=new struct Node;
    struct Node *third=new struct Node;
    struct Node *fourth=new struct Node;

    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=54;
    third->next=fourth;
    fourth->data=12;
    fourth->next=NULL;
    cout<<"Elements before inserting: "<<endl;
    traversing();
    cout<<endl;
    cout<<"Enter element you want to insert: "<<endl;
    cin>>k;
    insertatbeg(k);
     cout<<"Elements After inserting: "<<endl;
    traversing();

}

