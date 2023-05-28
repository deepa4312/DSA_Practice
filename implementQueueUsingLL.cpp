
// Queue - it is linear data structue which follows FIFO(first in first out).

// Operation - enqueue : insert element at end of queue.
//             dequeue : delete element at start of queue.

// Application - Schedule jobs by CPU, to carry out FIFO basis like printing jobs.
//             - to implement BFS of graph.

// Types - Queue, Doubly ended Queue, Circular Queue, Priority Queue

/*
class Node{
    int data;
    Node* next;
    Node(int d){
        data = d;
        next = nullptr;
    }
};

class Queue {
    Node *front, *rear;

    Queue(){
        front = rear = nullptr;
    }

    void enQueue(int x){
        Node* temp = new Node(x);
        // if empty then node is both front and rear
        if(rear == nullptr){
            front = rear = temp;
            return;
        }
        // else add at end
        rear->next = temp;
        rear = temp;
    }

    void deQueue(){
        // if empty then return null
        if(front == nullptr){
            return;
        }
        // store front node
        Node* temp = front;
        front = front->next;

        // if front is null -> No Nodes, change rear to null
        if(front == NULL){
            rear = NULL;

        // free node
        delete(temp);
        }
    }
};
*/
