#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Insert node at end
void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = newNode;
}

// Count occurrences and delete all occurrences
int countAndDelete(Node*& head, int key) {
    int count = 0;

    // Delete matching nodes from the beginning
    while (head != nullptr && head->data == key) {
        Node* temp = head;
        head = head->next;
        delete temp;
        count++;
    }

    // Delete matching nodes from the rest
    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        if (current->next->data == key) {
            Node* temp = current->next;
            current->next = current->next->next;
            delete temp;
            count++;
        }
        else {
            current = current->next;
        }
    }

    return count;
}

// Display linked list
void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data;

        if (temp->next != nullptr)
            cout << "->";

        temp = temp->next;
    }

    cout << endl;
}

int main() {
    Node* head = nullptr;
    int n, value, key;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter linked list elements: ";

    for (int i = 0; i < n; i++) {
        cin >> value;
        insert(head, value);
    }

    cout << "Enter key: ";
    cin >> key;

    cout << "\nOriginal Linked List: ";
    display(head);

    int count = countAndDelete(head, key);

    cout << "Count: " << count << endl;

    cout << "Updated Linked List: ";
    display(head);

    return 0;
}
