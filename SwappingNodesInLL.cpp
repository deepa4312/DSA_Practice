// Swapping Nodes in linked list
// given a linked list  swap kth node from both ends.
/*
class Solution{
    public:
         ListNode* swapNodes(ListNode* head, int k){
            ListNode* slow = head, *fast = head, *n1 = head;

            //finding n1
            for(int i=0; i<k-1; i++){
                fast = fast->next;
                n1 = fast;
            }

            //finding n2(i.e slow)
            while(fast->next!=NULL){
                fast = fast->next;
                slow = slow->next;
            }
            //Swapping
            int n1_val = n1->val;
            n1->val = slow->val;
            slow->val = n1_val;
            return head;
         }
};
*/

// Swap Nodes in pairs - given a linked list swap adjacent node
/*
class Solution {
    public:
         ListNode* SwapAdjacentNodes(ListNode* head){
            //base condition
            if(head == NULL || head->next == NULL) return head;

            ListNode* first = head;
            ListNode* second = head->next;

            //Start logic
            ListNode *tempList = SwapAdjacentNodes(second->next);
            first->next = tempList;
            second->next = first;
            return second;

         }
         ListNode* swapPairs(ListNode* head){
            return SwapAdjacentNodes(head);
         }
};
*/