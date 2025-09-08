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

   
    void pop_back()
    {
        if (tail == NULL)  // Empty list
        {
            cout << "List is empty\n";
            return;
        }

        if (head == tail) // Only one node
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node* temp = tail;       // Store current tail
            tail = tail->prev;       // Move tail pointer back
            tail->next = NULL;       // Break link with deleted node
            delete temp;             // Free memory
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
    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);

    dll.pop_back();
    
    dll.print(); 

    return 0;
}
