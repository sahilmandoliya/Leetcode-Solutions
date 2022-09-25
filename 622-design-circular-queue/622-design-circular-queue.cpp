class MyCircularQueue {
public:
    vector<int> queue;
    int temp=0;
    MyCircularQueue(int k) {
        queue.resize(k);
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        queue[temp]=value;
        temp++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        for(int i=0;i<temp-1;i++){
            queue[i]=queue[i+1];
        }
        temp--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return queue[0];
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return queue[temp-1];
    }
    
    bool isEmpty() {
        if(temp==0) return true;
        return false;
    }
    
    bool isFull() {
        if(temp==queue.size()){
            return true;
        }
        return false;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */