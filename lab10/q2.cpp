#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isEmpty() {
    return front == -1;
}

bool isFull() {
    return (rear + 1) % MAX_SIZE == front;
}

void insert(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot insert." << endl;
    } else {
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % MAX_SIZE;
        }
        queue[rear] = value;
        cout << "Inserted " << value << " into the queue." << endl;
    }
}

void remove() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot delete." << endl;
    } else {
        cout << "Deleted " << queue[front] << " from the queue." << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX_SIZE;
        }
    }
}

void displayFront() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Element at the front: " << queue[front] << endl;
    }
}

void displayQueue() {
    if (isEmpty()) {
        cout << "Queue is empty." << endl;
    } else {
        int i = front;
        cout << "Queue elements: ";
        while (true) {
            cout << queue[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % MAX_SIZE;
        }
        cout << endl;
    }
}

int main() {
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
                insert(value);
                break;
            case 2:
                remove();
                break;
            case 3:
                displayFront();
                break;
            case 4:
                displayQueue();
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
