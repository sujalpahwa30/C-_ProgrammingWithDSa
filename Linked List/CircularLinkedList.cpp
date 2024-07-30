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

class CLL{
public:
    Node* head;
    int size;
    CLL(){
        head = NULL;
        size = 0;
    }

    void InsertAtTail(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            newNode->next = head; // Circular connection
        } else {
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Circular connection
        }
        size++;
    }

    void InsertAtHead(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            newNode->next = head; // Circular connection
        } else {
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head; // Circular connection
            head = newNode;
        }
        size++;
    }

    void InsertAtIndex(int idx, int val){
        if(idx < 0 || idx > size){
            cout << "Invalid Index" << endl;
            return;
        }
        if(idx == 0){
            InsertAtHead(val);
        } else if(idx == size){
            InsertAtTail(val);
        } else {
            Node* newNode = new Node(val);
            Node* temp = head;
            for(int i = 1; i < idx; i++){
                temp = temp->next;
            }
            newNode->next = temp->next;
            temp->next = newNode;
            size++;
        }
    }

    void DeleteAtHead(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head->next == head){
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while(temp->next != head){
                temp = temp->next;
            }
            temp->next = head->next;
            delete head;
            head = temp->next;
        }
        size--;
    }

    void DeleteAtTail(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        if(head->next == head){
            delete head;
            head = NULL;
        } else {
            Node* temp = head;
            while(temp->next->next != head){
                temp = temp->next;
            }
            Node* delNode = temp->next;
            temp->next = head;
            delete delNode;
        }
        size--;
    }

    void DeleteAtIndex(int idx){
        if(idx < 0 || idx >= size){
            cout << "Invalid Index" << endl;
            return;
        }
        if(idx == 0){
            DeleteAtHead();
        } else if(idx == size - 1){
            DeleteAtTail();
        } else {
            Node* temp = head;
            for(int i = 1; i < idx; i++){
                temp = temp->next;
            }
            Node* delNode = temp->next;
            temp->next = temp->next->next;
            delete delNode;
            size--;
        }
    }

    int GetAtIndex(int idx){
        if(idx < 0 || idx >= size){
            cout << "Invalid Index" << endl;
            return -1;
        }
        Node* temp = head;
        for(int i = 0; i < idx; i++){
            temp = temp->next;
        }
        return temp->val;
    }

    void Display(){
        if(head == NULL){
            cout << "List is empty" << endl;
            return;
        }
        Node* temp = head;
        do {
            cout << temp->val << " ";
            temp = temp->next;
        } while(temp != head);
        cout << endl;
    }
};

int main(){
    CLL circularList;
    circularList.InsertAtTail(10);
    circularList.InsertAtTail(20);
    circularList.InsertAtTail(30);
    circularList.Display();

    circularList.InsertAtHead(5);
    circularList.Display();

    circularList.InsertAtIndex(2, 15);
    circularList.Display();

    circularList.DeleteAtHead();
    circularList.Display();

    circularList.DeleteAtTail();
    circularList.Display();

    circularList.DeleteAtIndex(1);
    circularList.Display();

    cout << "Element at index 1: " << circularList.GetAtIndex(1) << endl;
    cout << "Element at index 2: " << circularList.GetAtIndex(2) << endl;

    return 0;
}
