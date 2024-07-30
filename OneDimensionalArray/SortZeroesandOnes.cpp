#include<iostream>
#include<vector>
using namespace std;   // -> Two Pass Method 
// void sort01(vector<int>&v) {
//     int n = v.size();
//     int noo = 0;
//     int noz = 0;
//     for(int i = 0; i < n; i++){
//         if(v[i] == 0) noz++;
//         else noo++;
//     }
//     for(int i = 0; i < n; i++){    // Filling Elements 
//         if(i < noz) v[i] = 0;
//         else v[i] = 1;
//     }
// }
// int main() {
//     vector<int>v;
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(1);
//     v.push_back(0);
//     v.push_back(0);
//     v.push_back(1);
//     v.push_back(0);
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
//     sort01(v);
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
//     cout << endl;
// }   

    // -> Two Pointers ->>  Two Variables 
    void sort01m2(vector<int>&v) {
        int n = v.size();
        int i = 0;
        int j = n-1;
        while(i < j){
            if(v[i] == 0) i++;
            if(v[j] == 1) j--;
            else if(v[i] == 1 && v[j] == 0){  // if(i > j) break;   OR   if()
                v[i] = 0;  // Swap 
                v[j] = 1;
                i++;
                j--;
            }
        }
    }
    int main() {
        vector<int>v;
        v.push_back(1);
        v.push_back(0);
        v.push_back(1);
        v.push_back(1);
        v.push_back(0);
        v.push_back(0);
        v.push_back(1);
        v.push_back(0);
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
        sort01m2(v);
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
        cout << endl;
    }