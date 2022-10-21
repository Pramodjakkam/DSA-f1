#include<iostream>
using namespace std;
int dinsert(int item)
{
    int front=-1;
    int rear=-1;
    int queue[5];
    if (front==0 && rear==4 || front==rear+1)
    {
        cout<<"Over flow"<<endl;
    }
    else
    {
    if(front=-1)
     {front=0;
     rear=0;}
     else{
        if (rear=4)
         rear=0;
         else
            rear=rear+1;
     }
    }
    queue[rear]=item;
}
void print()
{
    int queue[5];
    cout<<"Rear: "<<queue[rear]<<endl;
}
int main()
{
    dinsert(10);
}
