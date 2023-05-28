// Delete node in a linkedlist

/*
class Solution{
    public:
         void deleteNode (ListNode* node){
            int val = node->next-val;
            node->next = node->next->next;
            node->val = val;
         }
};
*/

// Remove Nth node from end of list
// Approach-1. - find length of list l, delete l-n+1 node
// Approach-2 - a)Reverse    b) Delete Nth node         c)Reverse

/*class solution{
    public:
    ListNode* reverseList(ListNode* head){
        ListNode * prev = NULL, *curr = head, *temp;
        while(curr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n){
      ListNode *dummy = new ListNode(-1);
      dummy->next = reverseList(head);
      head = dummy;
      ListNode *curr = head;
      ListNode *prev = NULL;

      //Iteration
      for(int i=0; i<n; i++){
         prev = curr;
         curr = curr->next;
      }

      //Deletion
      prev->next = curr->next;
      return reverseList(head->next);
    }

 }; */
