#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class DoublyList
{
    Node* head;
    Node* tail;

public:
    DoublyList()
    {
        head = tail = NULL;
    }

   
    void push_back(int val) // Insert at the end of the list
    {
        Node* newNode = new Node(val);

        if (head == NULL) // Empty list
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;   // Link current tail to new node
            newNode->prev = tail;   // Link new node to current tail
            tail = newNode;         // Update tail pointer
        }
    }

   
    void pop_front()    // Delete the node at the front of the list
    {
        if (head == NULL) // Case 1: Empty list
        {
            cout << "List is empty";
            return;
        }

        Node* temp = head;
        head = head -> next;

        if(head != NULL)
        {
            head -> prev = NULL;
            delete temp;
        }

    }

    // Print the list
    void print()
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    DoublyList dll;

    // Inserting nodes at the end
    dll.push_back(10);
    dll.push_back(20);
    dll.push_back(30);

    cout << "Current List: ";
    dll.print();  // 10 <=> 20 <=> 30 <=> NULL

    // Deleting nodes from the front
    dll.pop_front();
    cout << "After deleting front: ";
    
    dll.print();  // 20 <=> 30 <=> NULL

    return 0;
}
