// approach -1 - create a set of nodes and insert everyNode into it, if already exist then return true else false
// approch-2 using slow and fast pointer cycle detection in linked list

// Linked list cycle detection
/*
class Solution{
    public:
         bool hasCycle(ListNode* head){
            //Base condition
            if(head==NULL)
                   return false;
            ListNode* slow = head,   *fast = head;
            while(fast->next != NULL && fast->next->next!=NULL){
               fast = fast->next->next;
               slow = slow->next;
               if(fast==slow) return true;
            }
            return false;
         }
};
*/

// List Cycle -2 - return the node where cycle begin
/*
class Solution{
    public:
         bool hasCycle(ListNode* head){
            //Base condition
            if(head==NULL)
                   return false;
            ListNode* slow = head,   *fast = head;
            while(fast->next != NULL && fast->next->next!=NULL){
               fast = fast->next->next;
               slow = slow->next;
               if(fast==slow){
                  slow = head;
                  while(slow!=fast){
                     slow = slow->next;
                     false = false->next;
                  }
                  return slow;
               }
            }
            return NULL;
       }
};
*/