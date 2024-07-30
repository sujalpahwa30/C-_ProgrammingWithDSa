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
int levels(Node* root){
    if(root == NULL) return 0;
    return 1 + max(levels(root->left) , levels(root->right));
}
// void nthLevel(Node* root , int curr , int level){
//     if(root == NULL) return;
//     if(curr == level) cout << root->val << " ";
//     nthLevel(root->left , curr+1 , level);
//     nthLevel(root->right , curr+1 , level);
// }

// // #  < ----- Optimised nthLevel  ------ >   ## nthLevel (D.F.S)
// void nthLevel(Node* root , int curr , int level){  // Left to Right
//     if(root == NULL) return;   // Base Case
//     if(curr == level){
//         cout << root->val << " ";  // Root
//         return;
//     }
//     nthLevel(root->left , curr+1 , level);  // Left
//     nthLevel(root->right , curr+1 , level);  // Right
// }

void nthLevelRev(Node* root , int curr , int level){  // Right to Left
    if(root == NULL) return;
    if(curr == level){
        cout << root->val << " ";
        return;
    }
    nthLevelRev(root->right , curr+1 , level);
    nthLevelRev(root->left , curr+1 , level);
}
void levelOrder(Node* root){   
    int n = levels(root);
    for(int i = 1; i <= n; i++){
       // nthLevel(root , 1 , i); // -> Left to Right
       nthLevelRev(root , 1 , i); // -> Right to Left
        cout << endl;
    }
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
    levelOrder(a);
}