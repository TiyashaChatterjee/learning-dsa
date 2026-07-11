Node* remove(Node* head, int value){
//     // int count = 0 ;
//     Node* temp = head;
//     if(head==NULL){
//         return NULL;
//     }
//     while (temp!=NULL)
//     {
//         // count++;
//         if (temp->data==value)
//         {
//             break;
//         }
//         temp = temp -> next;
//     }
//         Node* prev = temp->back;
//         Node* front = temp->next;
   
//     if (prev == NULL && front == NULL)
//     {
//         // delete temp;
//         return NULL;
//     }
//     else if(prev == NULL){
//         return removehead(head);
//     }
//     else if(front == NULL){
//         return removetail(head);
//     }
//     else{
//         prev->next = front;
//     front->back = prev;
//     temp->back = nullptr;
//     temp->next = nullptr;
//     delete(temp);
//     }
    
//     return head;
// }