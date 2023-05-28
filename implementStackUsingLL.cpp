/*
Stack - linear data struture which follow LIFO(last in first out)
Operation - pop: delete from top of stack
             Push :  insert into top of stack

Appliction - check for parenthesis, to evaluate postfix expression, to convert infix to postfix/prefix, implement DFS of graph
*/

/*
#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
};

    Node* top;

    void push(int data){
        Node* temp = new Node();
        if(!temp){
            cout<<"\nStack Overflow";
            exit(1);
        }
        //add at the top and change top as new node

        temp->data = data;
        temp->next = top;
        top = temp;
    }

    int isEmpty(){
        // if top is null then empty
        return top == NULL;
    }

    int peek(){
        // if stack is not empty then return top node's data
        if(!isEmpty()){
            return top->next;
        else
            exit(1);
        }

    void pop(){
        Node* temp;
        if(top == NULL){
            cout<<"\nStack Underflow"<<endl;
            exit(1);
        } else{
            temp = top;
            top = top->next;
            free(temp);
        }
    }
    }
*/