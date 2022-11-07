class Solution
{
    public:
    Node* reverse(Node* head){

        Node* prev = NULL;      
        Node* next=NULL;
        Node* curr = head;        

        while(curr != NULL){            

            next = curr->next;  
            curr->next = prev;

            prev = curr;
            curr = next;

        }        

        return prev;
    }      
    Node *compute(Node *head)
    {
        if(head==NULL || head->next==NULL) return head;
        head=reverse(head);
        Node* temp=head;
        
        while(temp->next != NULL){
            if(temp->next->data >= temp->data){
                temp=temp->next;
            }
            else{
                temp->next=temp->next->next;
            }
        }
        head=reverse(head);
        return head;
    }
    
};
