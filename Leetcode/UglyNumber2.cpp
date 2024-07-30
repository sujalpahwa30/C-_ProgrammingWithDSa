#include<iostream>
#include<vector>
using namespace std;
int uglyNumber(int n){
    vector<int>v;
    v.push_back(1);
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0 || i % 3 == 0 || i % 5 == 0) v.push_back(i);
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    return v[n];
}
int main(){
    int n;
    cin >> n;
    cout << uglyNumber(n);
}