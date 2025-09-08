//Pushback in Doubly Linked List.
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

    void push_back(int val) // Function to push at front in DLL
    {
        Node* newNode = new Node(val);  // Create a new node

        if(head == NULL)    // If list is empty
        {
            head = tail = newNode;  // Both head and tail point to newNode
        }
        else
        {
            tail-> next = newNode;  // Current tail points to new node
            newNode-> prev = tail;    // New node's prev points to current tail
            tail = newNode; // Move tail to new node
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

    dll.push_back(1);
    dll.push_back(2);
    dll.push_back(3);


    dll.print();
    
    return 0;
}