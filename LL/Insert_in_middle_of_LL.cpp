// Insert in the middle of the LL
#include<iostream>
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

class List
{
    Node* head;
    Node* tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)  // Push Front in LL
    { 
        Node* newNode = new Node(val);
        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void insert_middle(int val, int pos) // Insert at position (based index)
    {
        if(pos < 0)  
        {
            cout<<"Invalid Position\n";
            return;
        }
        if(pos == 0)  
        {
            push_front(val);
            return;
        }

        Node* temp = head;
        for(int i = 0; i < pos-1 ; i++)
        {
            if(temp ==  NULL)
            {
                cout<<"invalid Position\n";
            }
            temp = temp->next;
        }

        Node* newNode = new  Node(val);
        newNode -> next = temp-> next;
        temp -> next = newNode;

    }

    void PrintLL()  // Print the List
    {
        Node* temp = head;
        while(temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
        return;
    }
};

int main()
{
    List ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3); // List: 3->2->1->NULL

    ll.PrintLL();

    ll.insert_middle(4, 1); // Insert '4' at position 1
    ll.PrintLL();

    ll.insert_middle(5, 3); // Insert '5' at position 3
    ll.PrintLL();

    return 0;
}
