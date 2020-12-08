#include <bits/stdc++.h>
using namespace std;
struct Node { 
    int data; 
    Node* next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// push a new element to the beginning of the list
Node* prepend(Node* head, int data) {
    Node * newNode = new Node(data);
    if (head == NULL) {
        return newNode;
    }
    newNode->next = head;
    return newNode;
}

// print the list content on a line
void print(Node* head) {
    Node * u = head;
    while(u != NULL) {
        cout << u->data << " ";
        u = u->next;
    }
    cout << endl;
}

// return the new head of the reversed list
Node* reverse(Node* head) {
    if(head == NULL) return NULL;

    Node *prev = NULL, *current = NULL, *next = NULL;
    current = head;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    // now let the head point at the last node (prev)
    head = prev;
    return head;
}
  
int main() {
    int n, u;
    cin >> n;
    Node* head = NULL;
    for (int i = 0; i < n; ++i){
        cin >> u;
        head = prepend(head, u);
    } 
    
    cout << "Original list: ";
    print(head);

    head = reverse(head);
    
    cout << "Reversed list: ";
    print(head);

    return 0; 
}