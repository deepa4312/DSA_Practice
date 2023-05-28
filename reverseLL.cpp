/*iterative way to reverse linked list*/
#include <iostream>
using namespace std;

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
};*/
/*Recursive way to reverse linked list*/

/*class solution{
    ListNode* helper(ListNode* head, ListNode *prev){
        if(curr == NULL) return prev;
        ListNode* newNode = curr->next;
        curr->next = prev;
        return helper(newNode, curr);
    }
    ListNode* reverseList(ListNode* head){
        return helper(head, NULL)
}; */

// Reverse node in k groups- given a lined list & k, return a list with returned nodes by k - groups
/*
class Solution{
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

    ListNode* reverseInGroups(ListNode* head, int k){
        ListNode *curr = head;
        int currlen = 1;
        if(head == NULL) return head;
        while(curr->next!=NULL && currlen<k){
            curr = curr->next;
            currlen+=1;
        }
        if(currlen<k) return head;
        ListNode *tempNode = curr->next;
        curr->next = NULL;

        // start linking
        ListNode *tempList = reverseInGroups(tempNode, k);
        ListNode *prev = reverseList(head);
        head->next = tempList;
        return prev;
    }

    ListNode* reverseKGroup(ListNode* head, int k){
        return reverseInGroups(head, k);
    }

};
*/