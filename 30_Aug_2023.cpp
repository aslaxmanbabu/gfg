Node* deleteNode(Node *head,int x)
{
    Node *curr,*temp;
    
    curr = head;
    int count = 1;
    
    if(x == 1) {
        temp = head;
        head = head->next;
        delete temp;
    }
    else {
        while(count != x-1) {
            curr = curr->next;
            count++;
        }
        temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
    
    return head;
    
}
