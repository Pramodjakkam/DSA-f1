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
void insertatend()
{
    struct Node *k=new struct Node;
    k=head;
    while(k->next!=NULL)
    {
        k=k->next;
    }
    if(head==NULL)
    {
        head=new Node;
    }
    else
    {
        int item1;
        cout<<"Enter element to be inserted at the end"<<endl;
        cin>>item1;
        struct Node *p=new struct Node;
        p->data=item1;
        p->next=NULL;
        k->next=p;

    }
}
void deletion()
{
    int ele;
    struct Node *z=new struct Node;
    cout<<"Enter element to delete"<<endl;
    cin>>ele;
    if(head==NULL)
    {
        cout<<"Sorry! Nothing to delete"<<endl;
    }
    else
    {
        z=head;
        head=head->next;
        delete(z);
    }
}
void linearsearch()
{
    Node *l=head;
    int pup;
    cout<<"Enter the element you want to search"<<endl;
    cin>>pup;
    while(l!=NULL)
    {
        if(l->data==pup)
        {
            cout<<"Element found at location: "<<l<<endl;
            break;
        }
        else
            l=l->next;
    }
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
void counting()
{
    Node *p=head;
    int count=0;
    while(p!=NULL)
    {
        count=count+1;
        p=p->next;
    }
    cout<<"Count of Numbers: "<<count<<endl;
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
    cout<<endl;
    counting();
    cout<<endl;
    insertatend();
    cout<<endl;
    traversing();
    cout<<endl;
    linearsearch();
    cout<<endl;
    deletion();
    cout<<endl;
    traversing();


}


