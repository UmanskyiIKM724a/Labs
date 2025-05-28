#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
using namespace std;

template <typename T>
class PriorityQueue {
private:
    struct Element {
        T data;
        int priority;

        bool operator<(const Element& other) const {
            return priority < other.priority;
        }
    };

    vector<Element> heap;

public:
    void enqueue(const T& item, int priority) {
        Element elem;
        elem.data = item;
        elem.priority = priority;
        heap.push_back(elem);
        push_heap(heap.begin(), heap.end());
    }

    T dequeue() {
        if (heap.empty()) {
            throw out_of_range("Queue is empty");
        }
        pop_heap(heap.begin(), heap.end());
        T item = heap.back().data;
        heap.pop_back();
        return item;
    }

    T peek() const {
        if (heap.empty()) {
            throw out_of_range("Queue is empty");
        }
        return heap.front().data;
    }

    bool empty() const {
        return heap.empty();
    }

    void print() const {
        cout << "Priority Queue: ";
        for (size_t i = 0; i < heap.size(); ++i) {
            const Element& elem = heap[i];
            cout << "(" << elem.data << ", " << elem.priority << ") ";
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue<string> pq;

    pq.enqueue("Task A", 2);
    pq.enqueue("Task B", 5);
    pq.enqueue("Task C", 1);
    pq.enqueue("Task D", 4);

    pq.print();

    cout << "Peek: " << pq.peek() << endl;

    cout << "Dequeue: " << pq.dequeue() << endl;
    pq.print();

    cout << "Is empty: " << (pq.empty() ? "true" : "false") << endl;

    while (!pq.empty()) {
        cout << "Dequeue: " << pq.dequeue() << endl;
    }

    cout << "Is empty after all dequeues: " << (pq.empty() ? "true" : "false") << endl;

    return 0;
}
