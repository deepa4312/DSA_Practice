/*middle of Linkedlist*/

// Approach - traverse the linked list and find no of node and return mid
// Approach -> using 2 pointers -> slow and fast

/*class Solution{
    public:
         ListNode* middleNode(ListNode* head){
            if(head==NULL)
                   return head;
            ListNode* slow = head, *fast = head;

            // Traverse the Linkedlist
            while(fast!=NULL && fast->next!=NULL) {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
         }
}; */