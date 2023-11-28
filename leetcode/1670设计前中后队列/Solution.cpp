class FrontMiddleBackQueue {
public:
    vector<int> queue;
    FrontMiddleBackQueue() {
        queue = vector<int>();
    }

    void pushFront(int val) {
        queue.insert(queue.begin(), val);
    }

    void pushMiddle(int val) {
        queue.insert(queue.begin()+(queue.size())/2, val);
    }

    void pushBack(int val) {
        queue.push_back(val);
    }

    int popFront() {
        if (queue.empty()) {
            return -1; // 或者其他表示错误的值
        }
        int firstElement = queue.front();
        queue.erase(queue.begin());
        return firstElement;
    }

    int popMiddle() {
        if (queue.empty()) {
            return -1; // 或者其他表示错误的值
        }
        int middleElement = queue[(queue.size()-1)/2];
        queue.erase(queue.begin()+(queue.size()-1)/2);
        return middleElement;
    }

    int popBack() {
        if (queue.empty()) {
            return -1; // 或者其他表示错误的值
        }
        int lastElement = queue.back();
        queue.pop_back();
        return lastElement;
    }
};

/**
 * Your FrontMiddleBackQueue object will be instantiated and called as such:
 * FrontMiddleBackQueue* obj = new FrontMiddleBackQueue();
 * obj->pushFront(val);
 * obj->pushMiddle(val);
 * obj->pushBack(val);
 * int param_4 = obj->popFront();
 * int param_5 = obj->popMiddle();
 * int param_6 = obj->popBack();
 */