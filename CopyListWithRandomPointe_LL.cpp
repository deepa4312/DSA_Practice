// given a list clone and return
//  three things is required here -> dummy, curr, runner

// Approach-1
//   Steps
//  1. create a clone list(using original list next pointer)
// 2.for random copy - we have to go with pointer and set - T(n2)

// Approach-2
//   1. create a clone list(using original list next pointer)
//   2. mapping - original node with a clone nodes
/* T(o(n)) and S(n)
class Solution{
public:

      Node* copyRandomList(Node* head){
        unordered_map<Node*, Node*>mp;
        Node* dummy = new Node(100001);
        Node *runner = dummy, *curr = head;

        // initial iteration  - for next pointer for clone
        while(curr!=NULL){
            Node* newNode = new Node(curr->val);
            runner->next = newNode;
            mp[curr] = curr->next;
            runner = runner->next;
        }

        //setting starting points in both lists
        curr = head;
        runner = dummy->next;

        // setting the random variable - for random pointer - we make clone from original pointer
        while(curr!=NULL){
            if(curr->random!=NULL)
                runner->random = mp[curr->random];
            runner = runner->next;
            curr = curr->next;
        }
        return dummy->next;
      }

};
*/
/*
//Another Approach  - changing links(S(1) space)
// 1.create a clone list -> clone nodes add in between original list / inserting new nodes in between
  Node* duplicate(Node* head){
    Node* curr = head;
    while(curr!=NULL){
        Node* temp = curr->next;
        curr->next = new Node(curr->val);
        curr->next->next = temp;
        curr = temp;
    }
    curr = head;
//2. setting random pointer of clone list- curr->random ->next
   while(curr!=NULL){
    if(curr->next != NULL){
        curr->next->random = (curr->random!=NULL)? curr->random->next : NULL;
    }
    curr = curr->next->next;
   }

// 3.revert changes done in step2 // separating both the linked list
 Node* orig = head, *copy = head->next;
   Node* temp = copy;

   while(orig != NULL){
    orig->next = orig->next->next;
    copy->next = copy->next->next;
    orig = orig->next;
    copy = copy->next;
   }
// return answer
     return temp;

 }
*/
