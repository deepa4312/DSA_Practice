// Iterative way

/*
class Solution{
    public:
        ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
            // Base condition
            if(l1 == NULL) return l2;
            if(l2 == NULL) return l1;

            // make dummyNode
            ListNode* dummy = new ListNode(-101);
            ListNode* head = dummy;

            // Traverse the lists
            While(l1!=NULL && l2!=NULL){
                if(l1->val < l2->val){
                    ListNode* newnode = new ListNode(l1->val);
                    dummy->next = newnode;
                    l1 = l1->next;
                }
                else{
                    ListNode* newnode = new ListNode(l2->val);
                    dummy->next = newnode;
                    l2 = l2->next;
                }
                dummy = dummy->next;
            }

            // if a perticular list is NULL, the directory chain the other
            if(l1!=NULL) dummy->next = l1;
            if(l2!=NULL) dummy->next = l2;

            return head->next;
        }
}
*/

// Recursive way
/*class Solution{
   public:
       ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
           // Base condition
           if(l1 == NULL) return l2;
           if(l2 == NULL) return l1;

           // compare the starting values and link the nodes
           if (l1->val <= l2->val){
               l1->next = mergeTwoLists(l1->next, l2);
               return l1;
           }
           else {
               l2->next = mergeTwoLists(l2->next, l1);
               return l2;
           }
       }
};*/