//Search in LL
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
    int search(int key)
    {
        Node* temp = head;
        int idx = 0;

        while(temp != NULL)
        {
            if(temp->data == key)
            {
                return idx;
            }
            temp = temp -> next;
            idx++;
        }
        return -1;
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

    cout<<ll.search(3)<<endl;

    return 0;
}
