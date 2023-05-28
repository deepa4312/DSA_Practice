// Sorting list - By following merge sort
/*
class Solution{
    public:
         ListNode* merge(ListNode* l1, ListNode* l2){
            ListNode *dummy = new ListNode(-1);
            ListNode *curr = dummy;
            while(l1 && l2){
                if(l1->val < l2->val){
                    curr->next = l1;
                    l1 =l1->next
                } else{
                    curr->next = l2;
                    l2 = l2->next;
                }
                curr = curr->next;
            }
            if(l1) curr->next = l1;
            if(l2) curr->next = l2;

            return dummy->next;
         }

         ListNode* sortList(ListNode* head){
            if(!head || !head->next) return head;

            ListNode *slow = head;
            ListNode *fast = head->next;
            while(fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            //dividing the lists into 2 pairs
            fast = slow->next;
            slow->next = NULL;

            //sort & merge
            head = sortList(head);
            fast = sortList(fast);
            return merge(head, fast);
         }

};
*/