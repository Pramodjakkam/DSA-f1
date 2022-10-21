#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node * next;
};
void printlinked(struct node *ptr)
{
    cout<<"printing the linked list : "<<endl;
    while(ptr!=NULL)
    {

        cout<<ptr->data<<" ";
        ptr=ptr->next;

    }
    cout<<endl;
}
struct node *  insertinbetween(struct node * head,int index,int data)
{
    struct node * ptr=new struct node;
    ptr->data=data;
    struct node * p = new struct node ;
    p=head;
    int i=0;
    while( i != index-1)
    {
           p=p->next;
           i++;
    }
ptr->next=p->next;
p->next=ptr;

return(head);
}
struct node * insertafterdata(struct node * head);
struct node * insertatbeg(struct node * head,int data)
{
    struct node * ptr= new struct node;
    ptr->data=data;

    ptr->next=head;
    head=ptr;
    return(head);

}
struct node * insertatend(struct node * head,int data)
{
   struct node * ptr= new struct node;
   ptr->data=data;
   struct node * p= new struct node ;
   p= head;
   while(p->next != NULL)
   {
    p=p->next;

   }
p->next=ptr;
ptr->next=NULL;
return(head);
}
struct node * insertafternode(struct node * head,struct node * third,int data)
{
    struct node * ptr= new struct node;
    ptr->data=data;
    ptr->next=third->next;
    third->next=ptr;
    return(head);
}
int main()
{

 struct node * head= new struct node;
 struct node * second= new struct node;
 struct node * third= new struct node;
 struct node * fourth= new struct node;


 head->next=second;
 second->next=third;
 third->next=fourth;
 fourth->next=NULL;


 head->data=11;
 second->data=22;
 third->data=33;
 fourth->data=44;

 printlinked(head);
 cout<<"after inserting : "<<endl;
//head=insertatbeg(head,01);
//insertinbetween(head,2,25);
//head=insertatend(head,55);
head=insertafternode(head,third,41);
printlinked(head);
 return(0);
}
