#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void display(Node* head)
{
    Node* p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p = p->next;
    }
}



int main()
{
    Node* head=new Node(5);
    display(head);
    
}
