#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front;
    Node* rear;

public:
    Queue() {
        front = rear = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (front == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }

        cout << "Inserted " << value << " into the queue." << endl;
    }

    void remove() {
        if (front == nullptr) {
            cout << "Queue is empty. Cannot delete." << endl;
        } else {
            int deletedValue = front->data;
            Node* temp = front;
            front = front->next;
            delete temp;

            cout << "Deleted " << deletedValue << " from the queue." << endl;
        }
    }

    void displayFront() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Element at the front: " << front->data << endl;
        }
    }

    void displayQueue() {
        if (front == nullptr) {
            cout << "Queue is empty." << endl;
        } else {
            cout << "Queue elements: ";
            Node* current = front;
            while (current != nullptr) {
                cout << current->data << " ";
                current = current->next;
            }
            cout << endl;
        }
    }
};

int main() {
    Queue queue;
    int choice, value;

    while (true) {
        cout << "Menu:\n";
        cout << "1. Insert\n2. Delete\n3. Display element at the front\n4. Display all elements\n5. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a value to insert: ";
                cin >> value;
                queue.insert(value);
                break;
            case 2:
                queue.remove();
                break;
            case 3:
                queue.displayFront();
                break;
            case 4:
                queue.displayQueue();
                break;
            case 5:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}