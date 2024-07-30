#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m;
    cout << "Enter target : ";
    cin >> m;
    vector<int>v;
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    cout << "Enter array elements : ";
    for(int i = 0; i <= n-1; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size()-3; i++){
        for(int j = i+1; i < v.size()-2; j++){
            for(int k = i+2; k < v.size()-1; k++){
                 if(v[i] + v[j] + v[k] == m)
                 cout << "("<<i<<"," <<j<<"," <<k<<")" << endl;
            }
        }
    }
}