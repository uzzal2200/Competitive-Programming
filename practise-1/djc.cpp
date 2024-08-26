#include<bits/stdc++.h>
using namespace std;
class Node
{
  public:
  int val;
    Node* next;
    Node * prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};
void print(Node* head)
{
    Node * temp=head;
    while(temp != NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node * tail)
{
    Node * temp=tail;
    while(temp !=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
}
void insert_any_position(Node* head,int pos,int val)
{
    Node * newNode= new Node(val);
    Node * temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
      
    }
      newNode->next=temp->next;
        temp->next=newNode;
        newNode->next->prev=newNode;
        newNode->prev=temp;
}
int size(Node * head)
{
    Node * temp=head;
    int cnt=0;
    while(temp != NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
int main()
{
    Node * head=new Node(10);
    Node * a=new Node(20);
    Node * b=new Node(30);
    Node * c=new Node(40);
   Node * tail=c;
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    int pos,val;
    cin>>pos>>val;
    if(pos>=size(head))
    {
        cout<<"Invaild"<<endl;
    }
    else
    {
     insert_any_position(head,pos,val);
    }
    
    print(head);
    print_reverse(tail);
    return 0;
}
