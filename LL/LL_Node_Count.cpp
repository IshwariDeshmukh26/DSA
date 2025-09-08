//Linked List Count Nodes
//Problem: Count the number of nodes in a singly linked list.
//Sample Input: Linked list: 1->5->3->7
//Sample Output: 4

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

int countNodes(Node* head) {
    int count = 0;
    while(head) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(5);
    head->next->next = new Node(3);
    head->next->next->next = new Node(7);

    cout << "Node Count: " << countNodes(head);
    return 0;
}
