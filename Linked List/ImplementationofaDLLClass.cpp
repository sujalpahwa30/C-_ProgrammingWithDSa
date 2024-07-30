#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class DLL{
    public:
    Node* head;
    Node* tail;
    int size;
    DLL(){
        head = tail = NULL;
        size = 0;
    }
void InsertAtTail(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else{
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    size++;
}
void InsertAtHead(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else{
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    size++;
}
void InsertAtIndex(int idx , int val){
    if(idx < 0 || idx > size) cout << "Invalid Index" << endl;
    else if(idx == 0) InsertAtHead(val);
    else if(idx == size) InsertAtTail(val);
    else{
        Node* t = new Node(val);
        Node* temp = head;
        for(int i = 1; i <= idx-1; i++){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        t->prev = temp;
        t->next->prev = t;
        size++;
    }
}
void DeleteAtHead(){
    if(size == 0){
        cout << "List is empty";
        return;
    }
    head = head->next;
    if(head) head->prev = NULL;
    if(head == NULL) tail = NULL;
    size--;
}
void DeleteAtTail(){
    if(size == 0){
        cout << "List is empty";
        return;
    }
    else if(size == 1){
        DeleteAtTail();
        return;
    }
    Node* temp = tail->prev;
    temp->next = NULL;
    tail = temp;
    size--;
}
void DeleteAtIdx(int idx){
    if(size == 0){
        cout << "List is empty";
        return;
    }
    else if(idx < 0 || idx >= size){
        cout << "Invalid Index";
        return;
    }
    else if(idx == 0) return DeleteAtHead();
    else if(idx == size-1) return DeleteAtTail();
    else{
        Node* temp = head;
        for(int i = 1; i <= idx-1; i++){
            temp = temp->next;
        }
        temp->next = temp->next->next;
        temp->next->prev = temp;
        size--;
    }
}
int GetAtIdx(int idx){
    if(idx < 0 || idx >= size){
        cout << "Invalid Index";
        return -1;
    }
    else if(idx == 0) return head->val;
    else if(idx == size-1) return tail->val;
    else{
        if(idx < size/2){
            Node* temp = head;
            for(int i = 1; i <= idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
        else{
            Node* temp = tail;
            for(int i = 1; i < size-idx; i++){
                temp = temp->prev;
            }
            return temp->val;
        }
    }
}
void display(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
};
int main(){
    DLL list;
    list.InsertAtTail(10);
    list.InsertAtTail(20);
    list.InsertAtTail(30);
    list.display();
    list.InsertAtTail(40);
    list.InsertAtTail(50);
    list.display();
    list.InsertAtHead(3);
    list.InsertAtHead(8);
    list.display();
    list.InsertAtIndex(4 , 45);
    list.display();
    list.DeleteAtHead();
    list.display();
    list.DeleteAtTail();
    list.display();
    list.DeleteAtIdx(3);
    list.display();
    list.DeleteAtIdx(10);
    list.display();
    cout << list.GetAtIdx(3) << endl;
    cout << list.GetAtIdx(1);
}