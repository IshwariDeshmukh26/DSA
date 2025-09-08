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
    void push_front(int val)  //Push Front in LL
    { 
        Node* newNode = new Node(val);  //static
        if(head == NULL)
        {
            head = tail = newNode;
            return;
        }
        newNode->next = head;   //Link new node to current head
        head = newNode; //update head
    }
    void printLL()  //Print LL
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout<<temp ->data << "->";
            temp = temp -> next;
        }
        cout<<"NULL" <<endl;
    }
};

int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.printLL();
    return 0;
}