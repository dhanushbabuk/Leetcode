class MyCircularQueue {
public:
    int capacity;
    int size;
    int f , r;
    int *q;

    MyCircularQueue(int k) {
        capacity = k;
        size =0;
        f =-1;
        r =-1;
        q = new int[capacity]; 
    }
    
    bool enQueue(int value) {
        
        if(isFull())
        {
            return false;
        }
        else
        {
            if(isEmpty())
            {
                f = 0;
                r = 0;
            }
            else
            {
            r = (r+1) % capacity;
            }

            q[r] = value;
            size++;
        }
        return true;
    }
    
    bool deQueue() {
        
        if(!isEmpty())
        {
            f = (f+1)%capacity;
            size--;

            // if(isEmpty())
            // {
            //     f = -1;
            //     r =-1;
            // }
            return true;
        }
        return false;
    }
    
    int Front() {
        if(isEmpty())
        return -1;

        return q[f];
    }
    
    int Rear() {
         if(isEmpty())
        return -1;

        return q[r];
    }
    
    bool isEmpty() {
        if(size == 0)
        {
            return true;
        }
        return false;
    }
    
    bool isFull() {
        if(size ==capacity)
        return true;

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