// Remove duplicate from sorted list
/*
class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *dummy = new ListNode(-101);
        dummy->next = head;
        ListNode *curr = head;
        ListNode *prev = dummy;
        while (curr != NULL)
        {
            if (curr->val == pre->val)
            {
                prev->next = curr->next;
                curr = curr->next;
            }
            else
            {
                prev = curr;
                curr = curr->next;
            }
        }
        return dummy->next;
    }
};
*/

// another Approach

/*
ListNode *deleteDuplicates(ListNode *head)
{
    // Base condition
    if (head == NULL || head->next == NULL)
        return head;
    ListNode *curr = head;
    while (curr->next != NULL)
    {
        if (curr->val == curr->next->val)
        {
            curr->next = curr->next->next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}*/
