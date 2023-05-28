// Add two number - 1
/*
class Solution{
 public:
     ListNode* addTwoNumers(ListNode* l1, ListNode* l2){
        ListNode* dummyNode;
        ListNode* head;
        dummyNode = head = new ListNode(-1);
        if(!l1)
            return l2;
        if(!l2)
            return l1;

        int carry = 0;

        while(l1 || l2){
            int firstVal = l1 ? l1->val : 0;
            int secondVal = l2 ? l2->val : 0;

            int total = firstVal + secondVal + carry;
            carry = total/10;
            total = total%10;

            ListNode* newNode = new ListNode(total);
            dummyNode->next = newNode;

            dummyNode = dummyNode->next;

           // when size of one list is bigger than second one
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        // after adding all nodes still there is one carry left then for that we do this step
        [9,9,9,9,9,9,9]
        [9,9,9,9]

         if(carry){
            dummyNode->next = new ListNode(1);
         }
         return head->next;
     }
};
*/

// add two number-2

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
};
 ListNode* addTwoNumers(ListNode* l1, ListNode* l2){
    l1 = reverseList(l1);
    l2 = reverseList(l2);
        ListNode* dummyNode;
        ListNode* head;
        dummyNode = head = new ListNode(-1);
        if(!l1)
            return l2;
        if(!l2)
            return l1;

        int carry = 0;

        while(l1 || l2){
            int firstVal = l1 ? l1->val : 0;
            int secondVal = l2 ? l2->val : 0;

            int total = firstVal + secondVal + carry;
            carry = total/10;
            total = total%10;

            ListNode* newNode = new ListNode(total);
            dummyNode->next = newNode;

            dummyNode = dummyNode->next;

            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
         if(carry){
            dummyNode->next = new ListNode(1);
         }
         return reverseList(head->next);
     }
     */