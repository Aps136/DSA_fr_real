class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;
    void shiftSt(){
        if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
        }
    }
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {
        shiftSt();
        int topEl= s2.top();
        s2.pop();
        return topEl;       
    }
    
    int peek() {
        shiftSt();
        return s2.top();
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */


//TC: O(1) SC: O(N)
