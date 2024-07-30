#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    //Constructor:
    Node(int d){  
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
};
//Traversing
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
//Finding length of DDL.
int get_len(Node* head){
    int cnt=0;
    Node* temp=head;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void insert_at_head(Node* &head, int value){
    Node* temp = new Node(value);
    temp->next = head;
    if (head != nullptr) {
        head->prev = temp;
    }
    head = temp;
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    print(head);
    insert_at_head(head,8);
    print(head);
    insert_at_head(head,6);
    print(head);
    insert_at_head(head , 22);
    print(head);
}