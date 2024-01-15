#include <iostream>
using namespace std;

const int MAX_SIZE = 100;
int queue[MAX_SIZE];
int front = -1;
int rear = -1;

void insert(int value) {
    if (rear == MAX_SIZE - 1) {
        cout << "Queue is full. Cannot insert." << endl;
    } else {
        queue[++rear] = value;
        if (front == -1) {
            front = 0;
        }
        cout << "Inserted " << value << " into the queue." << endl;
    }
}

void remove() {
    if (front == -1) {
        cout << "Queue is empty. Cannot delete." << endl;
    } else {
        cout << "Deleted " << queue[front] << " from the queue." << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

void displayFront() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Element at the front: " << queue[front] << endl;
    }
}

void displayQueue() {
    if (front == -1) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
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
