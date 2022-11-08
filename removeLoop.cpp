Node* loopStart(Node* head){
        if(head==NULL || head->next==NULL) return NULL;
        Node* slow=head;
        Node* fast=head;
        Node* entry=head;
    
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)  {
                while(slow!=entry){
                    slow=slow->next;
                    entry=entry->next;
                }
                return entry;
            }
        }
       return NULL;
    }
 
Node *removeLoop(Node *head)
{
    if(head==NULL) return NULL;
    
     Node* startNode=loopStart(head);
    if(startNode==NULL) return head;
     Node* temp=startNode;
        
        while(temp->next!=startNode){
            temp=temp->next;
        }
        
        temp->next=NULL;
        return head;
}
