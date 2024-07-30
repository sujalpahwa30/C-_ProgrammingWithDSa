#include<iostream>  // Singly LL Deletion 
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{
    public:
    Node*head;
    Node*tail;
    int size = 0;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            tail->next = temp;
            tail = temp;
        }
        size++;
   }
    void display(){ 
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void deleteAtHead(){
        if(size == 0){
            cout << "List is Empty !";
            return;
        }
        head = head->next;
        size--;
        cout << endl;
    }
    void deleteAtTail(){
        if(size == 0){
            cout << "List is Empty !";
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
        size--;
    }
    void deleteAtIdx(int idx){
        if(size == 0){
            cout << "List is Empty !";
            return;
        }
        else if(idx < 0 || idx >= size) {
            cout << "Invalid Index";
            return;
        }
        else if(idx == 0) return deleteAtHead();
        else if(idx == size-1) return deleteAtTail();
        else{
            Node* temp = head;
            for(int i = 1; i <= idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
};
int main(){
    LinkedList ll;
    // Node* a = new Node(10);
    // Node* b = new Node(20);
    // Node* c = new Node(30);
    // Node* d = new Node(40);
    // a->next = b;
    // b->next = c;
    // c->next = d;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}
