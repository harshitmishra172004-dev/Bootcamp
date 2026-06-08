#include <iostream>

using namespace std;

// Node structure for the linked list
struct Node {
    int ticketId;
    Node* next;
    
    Node(int val) {
        ticketId = val;
        next = nullptr;
    }
};

// Queue class using Linked List
class ThemeParkQueue {
private:
    Node* front;
    Node* rear;

public:
    ThemeParkQueue() {
        front = nullptr;
        rear = nullptr;
    }

    // Function to add a person to the queue
    void enqueue(int val) {
        Node* newNode = new Node(val);
        if (rear == nullptr) {
            front = rear = newNode;
            return;
        }
        rear->next = newNode;
        rear = newNode;
    }

    // Function to calculate the sum of all ticket values
    int calculateTotalValue() {
        int totalSum = 0;
        Node* current = front;
        while (current != nullptr) {
            totalSum += current->ticketId;
            current = current->next;
        }
        return totalSum;
    }

    // Destructor to free memory
    ~ThemeParkQueue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }
};

int main() {
    int n;
    if (!(cin >> n)) return 0;

    ThemeParkQueue q;

    for (int i = 0; i < n; i++) {
        int ticketId;
        cin >> ticketId;
        q.enqueue(ticketId);
    }

    cout << q.calculateTotalValue() << endl;

    return 0;
}
