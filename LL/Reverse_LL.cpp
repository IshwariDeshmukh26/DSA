//Reverse a LL

#include <iostream>
using namespace std;

class Node 
{
public:
    int data;
    Node* next;

    Node(int val) 
    {
        data = val;
        next = NULL;
    }
};

class List {
    Node* head;
    Node* tail;

public:
    List() 
    {
        head = tail = NULL;
    }

    void push_back(int val)
    {
        Node* newNode = new Node(val);
        if (!head) 
        {
            head = tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }

    void PrintLL() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void reverse() {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;

        while (current != NULL) {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        tail = head;  // update tail to old head
        head = prev;  // update head to last node
    }
};

int main() {
    List ll;
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);

    ll.PrintLL();

    ll.reverse();

    ll.PrintLL();

    return 0;
}

