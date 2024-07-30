#include<iostream>
#include<queue>  // Inbuilt(Internal) implementation of Priority Queue
using namespace std;
int main(){
    vector<int>v = {9,6,1,19,3,2,8,12,5};
    int arr[] = {1,2,3,4,5,3,54,22,4,5,33,45,32,2,1,44,7};
    //priority_queue<int>hp;  -> priority_queue<int , vector<int> , less<int> > hp;  ## MaxHeap
   // priority_queue<int , vector<int> , greater<int> >hp;  // ## MinHeap
    priority_queue<int , vector<int> , greater<int> >minhpvector(v.begin() , v.end());
    priority_queue<int> maxhparray(arr , arr+9);  // ## MaxHeap
    // hp.push(3);
    // hp.push(4);
    // hp.push(110);
    // hp.push(9);
    // hp.push(14);
    // hp.push(-1);
    // hp.push(30);
    // hp.push(44);
   // cout << hp.top() << endl;
    cout << minhpvector.top() << endl;
    cout << maxhparray.top() << endl;
}