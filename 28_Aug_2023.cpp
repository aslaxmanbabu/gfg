Node *removeDuplicates(Node *head)
{
    Node *temp, *curr;
    map <int, bool> visited;
    
    curr = head;
    
    visited[curr->data] = true;
    
    while(curr->next != NULL) {
        
        if(!visited[curr->next->data]) {
            
            curr = curr->next;
            visited[curr->data] = true;
            
        }
        else {
            
            temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
            
        }
    }
    
    return head;
    
}
