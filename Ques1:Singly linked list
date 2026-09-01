#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class LinkedList {
    Node* head;

public:
    LinkedList() {
        head = NULL;
    }

    void insertBeginning(int x) {
        Node* newNode = new Node(x);
        newNode->next = head;
        head = newNode;
    }

    void insertEnd(int x) {
        Node* newNode = new Node(x);

        if (head == NULL) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }

    void insertBefore(int value, int x) {
        if (head == NULL)
            return;

        if (head->data == value) {
            insertBeginning(x);
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            if (temp->next->data == value) {
                Node* newNode = new Node(x);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        }
    }

    void insertAfter(int value, int x) {
        Node* temp = head;

        while (temp != NULL) {
            if (temp->data == value) {
                Node* newNode = new Node(x);
                newNode->next = temp->next;
                temp->next = newNode;
                return;
            }
            temp = temp->next;
        }
    }

    void deleteBeginning() {
        if (head == NULL)
            return;

        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteEnd() {
        if (head == NULL)
            return;

        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }

        Node* temp = head;

        while (temp->next->next != NULL)
            temp = temp->next;

        delete temp->next;
        temp->next = NULL;
    }

    void deleteNode(int x) {
        if (head == NULL)
            return;

        if (head->data == x) {
            deleteBeginning();
            return;
        }

        Node* temp = head;

        while (temp->next != NULL) {
            if (temp->next->data == x) {
                Node* p = temp->next;
                temp->next = temp->next->next;
                delete p;
                return;
            }
            temp = temp->next;
        }
    }

    void search(int x) {
        Node* temp = head;
        int pos = 1;

        while (temp != NULL) {
            if (temp->data == x) {
                cout << "Node found at position: " << pos << endl;
                return;
            }
            temp = temp->next;
            pos++;
        }

        cout << "Node not found" << endl;
    }

    void display() {
        Node* temp = head;

        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};

int main() {
    LinkedList list;
    int choice, x, value;

    do {
        cout << "\n1. Insert at Beginning";
        cout << "\n2. Insert at End";
        cout << "\n3. Insert Before";
        cout << "\n4. Insert After";
        cout << "\n5. Delete from Beginning";
        cout << "\n6. Delete from End";
        cout << "\n7. Delete Specific Node";
        cout << "\n8. Search Node";
        cout << "\n9. Display";
        cout << "\n10. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> x;
            list.insertBeginning(x);
            break;

        case 2:
            cout << "Enter value: ";
            cin >> x;
            list.insertEnd(x);
            break;

        case 3:
            cout << "Enter value to insert: ";
            cin >> x;
            cout << "Enter node value before which to insert: ";
            cin >> value;
            list.insertBefore(value, x);
            break;

        case 4:
            cout << "Enter value to insert: ";
            cin >> x;
            cout << "Enter node value after which to insert: ";
            cin >> value;
            list.insertAfter(value, x);
            break;

        case 5:
            list.deleteBeginning();
            break;

        case 6:
            list.deleteEnd();
            break;

        case 7:
            cout << "Enter node to delete: ";
            cin >> x;
            list.deleteNode(x);
            break;

        case 8:
            cout << "Enter value to search: ";
            cin >> x;
            list.search(x);
            break;

        case 9:
            list.display();
            break;

        case 10:
            cout << "Exit";
            break;

        default:
            cout << "Invalid choice";
        }

    } while (choice != 10);

    return 0;
}


