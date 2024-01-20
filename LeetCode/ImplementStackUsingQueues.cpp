// (225) Implement Stack using Queues
// 0ms (100%)
// 8.32MB (10.08%)

using namespace std;
#include <queue>

class MyStack {
    queue<int> q;
    int topele;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        topele = x;
    }
    
    int pop() {
        int size = q.size();
        while(size>1){
            this->push(q.front());
            q.pop();
            size--;
        }
        int x = q.front();
        q.pop();
        return x;
    }
    
    int top() {
        return this->topele;
    }
    
    bool empty() {
        return q.empty();
    }
};
