#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;  // Creates a max-heap by default

    // Insert elements with associated priorities
    pq.push(10);
    pq.push(30);
    pq.push(20);
    pq.push(5);

    cout << "Priority Queue elements: ";

    while (!pq.empty()) {
        cout << pq.top() << " ";  // Retrieve and print the highest priority element
        pq.pop();  // Remove the highest priority element
    }

    cout << endl;

    return 0;
}

