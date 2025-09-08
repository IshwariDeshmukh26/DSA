//Doubly Linked List
#include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int val)
    {
        data= val;
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
    void push_front(int val) // Function to push at front in DLL
    {
        Node* newNode = new Node(val);  // Create a new node

        if(head == NULL)    // If list is empty
        {
            head = tail = newNode;  // Both head and tail point to newNode
        }
        else
        {
            newNode-> next = head;  // New node points to current head
            head->prev = newNode;    // Current head's previous points to new node
            head = newNode; // Move head to new node
        }
    }
    void print()
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << " <=> ";
            temp = temp->next;
        }
        cout<<"NULL\n";
    }
};

int main()
{
    DoublyList dll;

    dll.push_front(1);
    dll.push_front(2);
    dll.push_front(3);

    dll.print();
    
    return 0;
}