#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    vector<int>v2;
    v2.push_back(4);
    v2.push_back(5);
    vector<int>v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);
    v3.push_back(9);
    v3.push_back(10);
    vector<vector<int> >v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    cout << v[0][3] << endl;  // Invalid 
    cout << v[0][2] << endl;
    cout << v[0].size() << endl;
    cout << v[1].size() << endl;
    cout << v[2].size() << endl;
    int n = v.size();
    int m = v[0].size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}