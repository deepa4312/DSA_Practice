// Palindrome linked list
// Approach1- create a copy of list and reverse it, compare value by value, if all are equal return true else false
// Approach2 - Reach middle node and return the remaining list as new list. Reverse the newlist and compare it value by value.
/*
class Solution{
    public:
         ListNode* middleNode(ListNode* head){

            ListNode* slow = head, *fast = head;
            // Traverse the Linkedlist
            while(fast!=NULL && fast->next!=NULL) {
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
         }

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

    bool compare(ListNode* l1, ListNode* l2){
        while(l1!=NULL && l2!=NULL){
            if(l1->val!=l2->val) return false;
            l1 = l1->next;
            l2 = l2->next;
        }
        return true;
    }

    bool isPalindrome(ListNode* head){
        if(head==NULL) return false;
        if(head->next == NULL) return true;
        ListNode *mid = middleNode(head);
        ListNode *l2 = mid->next;
        mid->next = NULL;
        l2 = reverseList(l2);
        return compare(head, l2);
    }

};
*/