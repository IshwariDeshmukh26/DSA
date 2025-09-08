//Delete the head element from CLL

//Delete At Head Element in CLL
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
class CircularList
{
    Node* head;
    Node* tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void insertAtTail(int val)
        {
        Node* newNode = new Node(val);
        if (tail == NULL) // Empty list
        {
            head = tail = newNode;
            tail->next = head; // Circular connection
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode; // Keep it circular
        }
    }

    void deleteATHead()
    {
        if(head == NULL) return;
        else if(head ==tail) 
        {
            //Singly Node
            delete head;
            head = tail =NULL;
        }
        else
        {
            //2 or more
            Node* temp = head;
            head = head->next;
            tail->next = head;

            temp->next = NULL;
            delete temp;
        }
    }

    void print()
    {
        if (head == NULL) return;

        Node* temp = head;
        do
        {
            cout << temp->data << "->";
            temp = temp->next;
        } while (temp != head);

        cout << head->data << endl; // to show it's circular
    }


};

int main()
{
    CircularList cll;
    cll.insertAtTail(1);
    cll.insertAtTail(2);
    cll.insertAtTail(3);

    cll.deleteATHead();

    cll.print(); 
    return 0;
}
