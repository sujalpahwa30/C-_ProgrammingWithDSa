#include<iostream>
#include<vector>
using namespace std;
class MaxHeap{
    vector<int>hp;
    int i;  // [0,i] -> MaxHeap
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
    void downheapify(int idx , int bound){  // Percolate Down
        while(idx < hp.size()){
            int lc = 2*idx + 1;
            int rc = 2*idx + 2;
            if(lc >= bound) break;  // idx -> leaf
            int maxEl = idx;
            if(rc < bound and hp[maxEl] < hp[rc]){
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
        i = n;
        for(int j = n/2; j >= 0; j--){
            downheapify(j , i);
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
        i--;
        if(!empty())
        downheapify(0 , i);
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
    vector<int>heapSort(){
        int sz = hp.size();
        while(sz > 0){
            int el = 0;
            swap(hp[el] , hp[i]);
            i--;
            sz--;
            downheapify(0 , i);
        }
        return hp;
    }
};
void heapSort(vector<int>& v){
    MaxHeap hp(v);
    v = hp.heapSort();
}
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
    // vector<int>v = {9,6,1,19,3,2,8,12,5};
    // MaxHeap hp(v);
    // hp.display();
    // hp.push(100);
    // hp.display();
    vector<int>v = {5,4,3,2,1};
    heapSort(v);
    cout << "[";
    for(int j = 0; j < v.size(); j++){
        cout << v[j] << " ";
    }
    cout << "]\n";
    return 0;
}