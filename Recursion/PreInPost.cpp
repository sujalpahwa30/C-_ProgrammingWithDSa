#include<iostream>
using namespace std;
void pip(int n) {
    if(n == 0) return;
    cout << "Pre" << n << endl;
    pip(n-1);
    cout << "In" << n << endl;
    pip(n-1);
    cout << "Post" << n << endl;
}
int main() {
    pip(3);
}


// Pre3
// Pre2
// Pre1
// In1
// Post1
// In2
// Pre1
// In1
// Post1
// Post2
// In3
// Pre2
// Pre1
// In1
// Post1
// In2
// Pre1
// In1
// Post1
// Post2
// Post3


