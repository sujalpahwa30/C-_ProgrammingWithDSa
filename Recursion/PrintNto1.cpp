#include<iostream>
using namespace std;
void print(int n) {
    if(n == 0) return;    // Base Call
    cout << n << endl;    // Kaam
    print(n-1);          // Call
}
int main() {
    print(10);
}