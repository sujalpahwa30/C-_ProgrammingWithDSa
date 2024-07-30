#include<iostream>
#include<algorithm>
using namespace std;
int minSteps(string s , string t){
    sort(s.begin() , s.end());
    sort(t.begin() , s.end());
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        for(int j = 0; j < t.length(); j++){
            if(s[i] != t[j]) count++;
        }
    }
    return count;
}
int main(){
    string s = "leetcode";
    string t = "practice";
    cout << minSteps(s , t);
}