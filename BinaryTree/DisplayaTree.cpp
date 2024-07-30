#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void display(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}
int sum(Node* root){    // Sum of tree nodes
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}
int size(Node* root){    // Size of Binary Tree
    if(root == NULL) return 0;
    return 1 + size(root->left) + size(root->right);
}
int MaxInTree(Node* root){   // Node with Max Value 
    if(root == NULL) return INT_MIN;
    int lMax = MaxInTree(root->left);
    int rMax = MaxInTree(root->right);
    return max(root->val , max(lMax , rMax));
}
int levels(Node* root){   // No of levels of a Tree     ,     Height = No of levels - 1
    if(root == NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
void nthLevel(Node* root , int curr , int level){
    if(root == NULL) return;
    if(curr == level) cout << root->val << " ";
    nthLevel(root->left , curr+1 , level);
    nthLevel(root->right , curr+1 , level);
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    display(a);
    cout << endl;
    cout << sum(a);
    cout << endl;
    cout << size(a);
    cout << endl;
    cout << MaxInTree(a);
    cout << endl;
    cout << levels(a);
    cout << endl;
    nthLevel(a , 3 , 3);
}