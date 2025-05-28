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

    std::vector<Element> heap;

public:
    void enqueue(const T& item, int priority) {
        Element elem;
        elem.data = item;
        elem.priority = priority;
        heap.push_back(elem);
        std::push_heap(heap.begin(), heap.end());
    }

    T dequeue() {
        if (heap.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        std::pop_heap(heap.begin(), heap.end());
        T item = heap.back().data;
        heap.pop_back();
        return item;
    }

    T peek() const {
        if (heap.empty()) {
            throw std::out_of_range("Queue is empty");
        }
        return heap.front().data;
    }

    bool empty() const {
        return heap.empty();
    }

    void print() const {
        std::cout << "Priority Queue: ";
        for (size_t i = 0; i < heap.size(); ++i) {
            const Element& elem = heap[i];
            std::cout << "(" << elem.data << ", " << elem.priority << ") ";
        }
        std::cout << std::endl;
    }
};

int main() {
    PriorityQueue<std::string> pq;

    pq.enqueue("Task A", 2);
    pq.enqueue("Task B", 5);
    pq.enqueue("Task C", 1);
    pq.enqueue("Task D", 4);

    pq.print();

    std::cout << "Peek: " << pq.peek() << std::endl;

    std::cout << "Dequeue: " << pq.dequeue() << std::endl;
    pq.print();

    std::cout << "Is empty: " << (pq.empty() ? "true" : "false") << std::endl;

    while (!pq.empty()) {
        std::cout << "Dequeue: " << pq.dequeue() << std::endl;
    }

    std::cout << "Is empty after all dequeues: " << (pq.empty() ? "true" : "false") << std::endl;

    return 0;
}