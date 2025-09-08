//Middle in Linked List

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

class List {
    Node* head;
    Node* tail;

public:
    List() 
    {
        head = tail = NULL;
    }

    void push_back(int val)//Adds element to to LL
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

    void PrintLL() 
    {   
        Node* temp = head;
        while (temp) 
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    void findMiddle()//Finds the middle element of LL
    {
        if(head == NULL)
        {
            cout<<"List is empty"<<endl;
            return;
        }

        Node* slow = head;
        Node* fast = head;

        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast ->next ->next;
        }
        cout<<"Middle element is:"<<slow->data <<endl;
    }

};
int main() {
    List ll;

    // Adding elements to the linked list
    ll.push_back(10);
    ll.push_back(20);
    ll.push_back(30);
    ll.push_back(40);
    ll.push_back(50);

    ll.PrintLL();

    ll.findMiddle();

    return 0;
}