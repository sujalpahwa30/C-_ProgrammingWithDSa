#include<iostream>
#include<vector>
using namespace std;
class MaxHeap{
    vector<int>hp;
    void upheapify(int ci){  // Percolate Up
        while(ci > 0){
            int pi = (ci-1)/2;
            if(hp[pi] < hp[ci]){
                swap(hp[pi] , hp[ci]);
                ci = pi;
            }
            else{
                break;
            }
        }
    }
    void downheapify(int idx){  // Percolate Down
        while(idx < hp.size()){
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;
            if(lc >= hp.size()) break;  // udx -> leaf
            int maxEl = idx;
            if(hp[lc] > hp[maxEl]){
                maxEl = rc;
            }
            if(maxEl != idx){
                swap(hp[idx] , hp[maxEl]);
                idx = maxEl;  // For next iteration
            }
            else{
                break;
            }
        }
    }
    public:
    // // Not Efficient Solution 
    // MaxHeap(vector<int>v){  // T.C. = O(nlogn)
    //     hp = v;
    //     for(int i = 1; i < hp.size(); i++){
    //         upheapify(i);
    //     }
    // }

    // # Optimised Solution 
    MaxHeap(vector<int>v){  // T.C. = O(n)
        hp = v;
        int n = hp.size();
        for(int i = n/2; i >= 0; i--){
            downheapify(i);
        }
    }
    void push(int element){   // T.C. = O(logn)
        hp.push_back(element);
        upheapify(hp.size()-1);
    }
    void pop(){  // T.C. = O(logn)
    // Removes the highest priority element
        if(empty()) return;
        swap(hp[0] , hp[hp.size()-1]);
        hp.pop_back();
        if(!empty())
        downheapify(0);
    }
    int peek(){  // T.C. = O(1)
        if(empty()) return INT_MIN;
        return hp[0];
    }
    bool empty(){
        return hp.size() == 0;
    }
    void display(){
        cout << "[";
        for(int i = 0; i < hp.size(); i++){
            cout << hp[i] << " ";
        }
        cout << "]\n";
    }
};
int main(){
    // MaxHeap hp;
    // hp.push(3);
    // hp.push(4);
    // hp.push(6);
    // hp.push(12);
    // hp.push(22);
    // hp.push(44);
    // hp.push(5);
    // hp.push(25);
    // hp.push(30);
    // hp.push(11);
    // hp.push(50);
    // hp.display();
    // hp.pop();
    // hp.display();
    // hp.pop();
    // hp.display();
    vector<int>v = {9,6,1,19,3,2,8,12,5};
    MaxHeap hp(v);
    hp.display();
    hp.push(100);
    hp.display();
    return 0;
}