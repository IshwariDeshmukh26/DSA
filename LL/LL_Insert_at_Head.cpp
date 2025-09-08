//Linked List — Insert at Head
//Problem: Given a singly linked list, insert a node with given value at the beginning.
//Sample Input: Linked list: 1->2->3 
//Value: 7
//Sample Output: 7->1->2->3

Sample Output: 7123
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

void printList(Node* head) {
    while(head) {
        cout << head->data;
        if(head->next) cout << " -> ";
        head = head->next;
    }
}

void insertAtHead(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    
    insertAtHead(head, 7);
    printList(head);
    return 0;
}
