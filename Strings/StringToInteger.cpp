#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "1234561728836483993";
  //  int x = stoi(str);     // -> String to integer 
   long long x = stoll(str);   // -> String to long long 
    cout << x << endl;
    cout << x+1;
}