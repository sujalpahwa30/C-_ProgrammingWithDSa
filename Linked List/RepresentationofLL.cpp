#include<iostream>
using namespace std;
class Node{  // Node Class
public:
   int val;
   Node* next;
   Node(int val){    // With Parameterised Constructor
    this->val = val;
    this->next = NULL;
   }
};
void display(Node* head){   // Displaying a LL 
    Node* temp = head;       // Iterative Solution
    while(temp != NULL){    // T.C. = O(n) , S.C. = O(1)
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
int size(Node* head){     // And its size
    Node* temp = head;
    int n = 0;
    while(temp != NULL){
        n++;
        temp = temp->next;
    }
    return n;
}
int main(){
    // Linking nodes to form a LL 
    Node* a = new Node(10);       
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    display(a);
    cout << size(a);
}