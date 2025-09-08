//Linked List Delete by Value
//Problem: Delete the first occurrence of a given value from a singly linked list.
//Sample Input: Linked list: 9->7->6->4
//Delete: 6
//Sample Output: 9->7->4

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

void deleteByValue(Node* &head, int val) {
    if(!head) return;
    if(head->data == val) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* curr = head;
    while(curr->next && curr->next->data != val)
        curr = curr->next;
    if(curr->next) {
        Node* temp = curr->next;
        curr->next = curr->next->next;
        delete temp;
    }
}

int main() {
    Node* head = new Node(9);
    head->next = new Node(7);
    head->next->next = new Node(6);
    head->next->next->next = new Node(4);

    deleteByValue(head, 6);
    printList(head);
    return 0;
}
