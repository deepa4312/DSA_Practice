
// if push, push into queue from rear end & pop & push all elements
// if pop, pop from queue from front end.

/*
class Stack{
    queue <int> q;

    public:

       //push operation
    void push(int x){
        int n = q.size();
        q.push(x);
        for(int i=0; i<n; i++){
            int value = q.front();
            q.pop();
            q.push(value);
        }
    }

    // pop operation
    int pop(){
        int value = q.front();
        q.pop();
        return value;
    }

     //accessing top value
     int Top(){
        return q.front();
     }

     // finding size of stack

     int size(){
        return q.size();
     }
};
*/