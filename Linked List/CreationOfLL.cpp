#include<iostream>
using namespace std;
class Node{  // Linked list node
public:
   int val;
   Node*next;
   Node(int val){
    this->val = val;
    this->next = NULL;  // a.next = NULL; b.next = NULL;
   }
   // Node temp = a;
   // while(temp.next != NULL){
   //    cout << temp.val << " ";
   //    temp = *(temp.next);
   // }
};
//  Node temp = a;
//    while(temp.next != NULL){
//       cout << temp.val << " ";
//       temp = *(temp.next);
//    }
int main(){
   Node a(10);    // Node a; // a.val = 10;
   Node b(20);
   Node c(30);
   Node d(40);
   cout << &a << endl;
   cout << a.next << endl;
   // Forming linked list
   a.next = &b;
   b.next = &c;
   c.next = &d;
   d.next = NULL;
  // a.next->val = 50;
   cout << a.next << endl;
   cout << a.val << endl;
   cout << b.val << endl;
   cout << c.val << endl;
   cout << d.val << endl;
   cout << &a << " " << &b << " " << endl;
   cout << (a.next)->val << endl;
   cout << (b.next)->val << endl;
   cout << ((a.next)->next)->val << endl;
   // Value of d 
   cout << (((a.next)->next)->next)->val << endl;
  // cout << (*((*((*(a.next)).next)).next)).val << endl;  -> Same 

  Node temp = a;
   //while(temp.next != NULL)
   while(1){
      cout << temp.val << " ";
      temp = *(temp.next);
   }

}