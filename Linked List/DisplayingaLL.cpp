#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void displayrec(Node* head){    // Recursive Solution
    if(head == NULL) return;     // Base
    cout << head->val << " ";    // Kaam
    displayrec(head->next);      // Call
}
void displayrev(Node* head){  // Print all the nodes in reverse order 
    if(head == NULL) return;  // Base
    displayrev(head->next);   // Call
    cout << head->val << " ";  // Kaam
}
int main(){
    Node* a = new Node(10);      // T.C. = O(n) , S.C. = O(n)
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    a->next = b;
    b->next = c;
    c->next = d;
    displayrec(a);        // Iterative Solution is better than Recursive Solution 
    cout << endl;
    displayrev(a);
}