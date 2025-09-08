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
    void push_back(int val) //Push Back in LL
    {
        Node* newNode = new Node(val);

        if(head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail -> next = newNode;
            tail = newNode; 
        }
    }
    void pop_front()    //Pop Front in LL
    {
        Node* temp = head;
        {
            if(head == NULL)
            {
                cout<<"Linked is empty\n";
                return;
            } 

            Node* temp = head;
            head = head->next;
            temp->next = NULL;

            delete temp;
        }
   
    }
    void PrintLL()  //Print the List
    {
        Node* temp = head;

        while(temp != NULL)
        {
            cout<<temp ->data <<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
    
};
int main()
{
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    ll.push_back(4);

    ll.pop_front();

    ll.PrintLL();
  
    return 0;
}