https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1#

Node* reverse(Node* head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* fast=head->next;
    while(fast!=NULL)
    {
        curr->next=prev;
        prev=curr;
        curr=fast;
        fast=fast->next;
    }
    curr->next=prev;
    return curr;
}




class Solution
{
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node* temp=head;
        
        // while(temp!=NULL)
        // {
        //     cout<<temp->data<<" ";
        //     temp=temp->next;
        // }
    
        while(temp!=NULL)
        {
            if(temp->next==NULL && temp->data==9 )
            {
                temp->data=1;
                Node* temp2=new Node(0);
                temp2->next=head;
                head=temp2;
                 temp=temp->next;
            }
            else if(temp->data==9)
            {
                temp->data=0;
                 temp=temp->next;
            }
            else
            {
                temp->data=temp->data+1;
                 temp=temp->next;
                 break;
            }
         
        }
     
      head=reverse(head);
      return head;
    }
};
