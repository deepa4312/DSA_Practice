// Given a linkedlist group all odd indices nodes followed by even numbers
/*
class Solution{
    public:
         ListNode* oddEvenList(ListNode* head){
            if(!head) return NULL;

            ListNode *even = head->next;
            ListNode *odd = head;
            ListNode *evenHead = even;

            while(even && even->next){
                odd->next = even->next;
                odd = odd->next;
                even->next = odd->next;
                even = even->next;
            }

            // like odd and even listss
            odd->next = evenHead;
            return head;
         }
}; */