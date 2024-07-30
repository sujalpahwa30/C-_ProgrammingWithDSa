#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void reverseSection(vector<char>& s, int start, int end) {
    while (start < end) {
        swap(s[start], s[end]);
        start++;
        end--;
    }
}
void reverseWords(vector<char>& s) {
    int n = s.size();
    reverseSection(s, 0, n-1);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == ' ') {
            reverseSection(s, j, i-1);
            j = i+1;
        }
    }
    reverseSection(s, j, n-1);
}
int main() {
    vector<char> s = {'t', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e'};
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    reverseWords(s);
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    return 0;
}

