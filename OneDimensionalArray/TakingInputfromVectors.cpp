#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector<int>v(5);   // Taking input 
    // for(int i = 0; i < 5; i++){
    //     cin >> v[i];
    // }
    // for(int i = 0; i < 5; i++){
    //     cout << v[i] << " ";
    // }

    //    vector<int>v;
    //    for(int i = 0; i < 5; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    //    }
    //    for(int i = 0; i < 5; i++){
    //     cout << v[i] << " ";
    //    }

      vector<int>v;
      v.push_back(10);
      v.push_back(28);
      v.push_back(44);
      v.push_back(33);
      v.at(1) = 22;    // At is used to modify elements 
      cout << v.at(1); 
      cout << endl;
      for(int i = 0; i < v.size(); i++){
        cout << v.at(i) << " ";
      }
      cout << endl;
      
      // Inbuilt Function for sorting 
    //   sort(v.begin() , v.end());   // Sort -> Arrange the data/elements in ascending order 
    //   for(int i = 0; i < v.size(); i++){
    //     cout << v.at(i) << " ";
    //   }
    //   cout << endl;
      
}