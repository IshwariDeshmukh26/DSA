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

class List
{
    Node* head;
    Node* tail;

public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)  //Push Front in LL
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void push_back(int val) //Push Back in LL
    {
        Node* newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_back() //Pop Back from the LL.
    {
        if (head == NULL)
        {
            cout << "LL is empty\n";
            return;
        }

        if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }

        Node* temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    void PrintLL()  //Print the List
    {
        Node* temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);

    ll.PrintLL();

    ll.pop_back();
    ll.PrintLL();

    return 0;
}
