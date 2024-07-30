#include<iostream>  // Vector is an dynamic array 
#include<vector>   // Header file for using vector 
using namespace std;
int main() {
    vector<int>v;   // Syntax
    v.push_back(6);  // push_back is used for increasing the size or for inserting 
    v.push_back(4);   // v[1] = 4
    v.push_back(3);
    v.push_back(8);
    v.push_back(5);
    cout << v[0] << " ";
    cout << v[1] << " ";
    cout << v[2] << " ";
    cout << v[3] << " ";
    cout << v[4] << " ";
    cout << endl;
    cout << v.size() << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.capacity() << endl;
    cout << endl;
    v.pop_back();    //pop_back is used for decreasing the size of the vector 
    v.pop_back();
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    v.push_back(4);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);
    cout << "Size is : " << v.size() << endl;
    cout << "Capacity is : " << v.capacity() << endl;
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << "Size is : " << v.size() << endl;   // Size gets changed -> Actual size of vector 
    cout << " Capacity is : " << v.capacity() << endl;   // Capacity remains same -> 0 1 2 4 8 16 ...
}
