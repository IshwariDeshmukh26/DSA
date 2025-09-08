#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

// Insert node at end
void insertAtEnd(ListNode*& head, int val) {
    ListNode* newNode = new ListNode(val);
    if (!head) {
        head = newNode;
        return;
    }
    ListNode* temp = head;
    while (temp->next) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Print list
void printList(ListNode* head) {
    while (head) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Merge two sorted lists using your logic
ListNode* merge2List(ListNode* h1, ListNode* h2) {
    if (!h1) return h2;
    if (!h2) return h1;

    if (h1->val <= h2->val) 
    {
        h1->next = merge2List(h1->next, h2);
        return h1;
    } 
    else 
    {
        h2->next = merge2List(h1, h2->next);
        return h2;
    }
}

int main() {
    ListNode* list1 = NULL;
    ListNode* list2 = NULL;

    // Create first sorted list
    insertAtEnd(list1, 1);
    insertAtEnd(list1, 3);
    insertAtEnd(list1, 5);

    // Create second sorted list
    insertAtEnd(list2, 2);
    insertAtEnd(list2, 4);
    insertAtEnd(list2, 6);

    cout << "List 1: ";
    printList(list1);
    cout << "List 2: ";
    printList(list2);

    ListNode* merged = merge2List(list1, list2);
    cout << "Merged List: ";
    printList(merged);

    return 0;
}
