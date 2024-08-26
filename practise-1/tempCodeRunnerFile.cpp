void insert_any_position(Node * head,int pos,int val)
// {
//     Node * newNode=new Node(val);
//     Node * temp=head;
//     for(int i=1;i<=pos-1;i++)
//     {
//         temp=temp->next;
//     }
//     newNode->next=temp->next;
//     temp->next=newNode;
//     newNode->next->prev=newNode;
//     newNode->prev=temp;
// }
// int size(Node * head)
// {
//     Node* temp=head;
//     int cnt=0;
//     while(temp !=NULL);
//     {
//         cnt++;
//         temp=temp->next;
//     }
//     return cnt;
// }