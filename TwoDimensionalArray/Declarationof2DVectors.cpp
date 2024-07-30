#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int> >v(3 , vector<int>(4,2));
    cout << v.size() << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << v.size() << endl;   // Rows
    cout << v[0].size() << endl;    // Columns 
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[0].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}