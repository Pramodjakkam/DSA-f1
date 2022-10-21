#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
struct Node *head=new struct Node;
void printalternate()
{
  for(Node *p=head;p!=NULL;p->next)
  {
      cout<<p->data<<endl;
      p=p->next->next;
  }

}
void insertingbegcircular()
{
    int item;
    cout<<"Enter element to insert: "<<ends;
    cin>>item;
    struct Node *p=new struct Node;
    p->data=item;
    if(head==NULL)
    {
        head=p;
        p->next=head;
    }
    else
    {
        struct Node *r=new Node;
        do
        {
            r=r->next;
        }
        while(r->next!=head);

    r->next=p;
    p->next=head;
    head=p;

    }

}
void circular()
{
    struct Node *k=new struct Node;
    k=head;
    do
    {
       cout<<k->data<<endl;
       k=k->next;

    }
    while(k->next!=head);
}
void print()
{
struct Node *ptr=new struct Node;
ptr=head;
while(ptr!=NULL)
{
   cout<<ptr->data<<endl;;
    ptr=ptr->next;
}
}
int main()
{
    struct Node *second=new struct Node;
    struct Node *third=new struct Node;
    struct Node *fourth=new struct Node;

    head->data=45;
    head->next=second;
    second->data=56;
    second->next=third;
    third->data=98;
    third->next=fourth;
    fourth->data=55;
    fourth->next=head;
   // circular();
    print();
    cout<<"------------------------------------------------"<<endl;
    //printalternate();
    insertingbegcircular();
print();

}

