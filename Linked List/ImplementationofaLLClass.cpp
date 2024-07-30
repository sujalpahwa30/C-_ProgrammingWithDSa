#include<iostream>
using namespace std;
class Node{   // User Defined Data Type
public:
   int val;
   Node* next;
   Node(int val){
    this->val = val;
    this->next = NULL;
   }
};
class LinkedList{   // User Defined Data Structure
public:
    Node* head;
    Node* tail;
    int size = 0;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
    void insertAtTail(int val){  //   ## < ------ InsertAtEnd(Tail)Function ------ >
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
    void insertAtEnd(Node* head , int val){
        Node* t = new Node(val);
        while(head->next != NULL) head = head->next;
        head->next = t;
    }
    void insertAtHead(int val){  // ## < ------ InsertAtBeginningFunction -------- >
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else{
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAtIdx(int idx , int val){   // ## < ------- InsertFunction -------- >
        if(idx < 0 || idx > size) cout << "Invalid Index" << endl;
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else{
            Node* t = new Node(val);
            Node* temp = head;
            for(int i = 1; i <= idx-1; i++){
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }
    int getAtIdx(int idx){   // ## < --------- Get Element Function --------- >
        if(idx < 0 || idx >= size){
         cout << "Invalid Syntax";
        return -1;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i <= idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
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
            cout << "List is empty !";
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
    ll.insertAtTail(10);
    ll.display();
    ll.insertAtTail(20);
    ll.display();
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.display();
    cout << ll.size;
    // ll.display();
    // ll.insertAtEnd(2 , 80);
    // ll.display();
    ll.insertAtHead(50);
    ll.display();
    ll.insertAtHead(100);
    ll.display();
    ll.insertAtIdx(4 , 80);
    ll.display();
    cout << ll.getAtIdx(2);
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtHead();
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();
}