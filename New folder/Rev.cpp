#include<iostream>
using namespace std;
int main(){
    string str = "Sujal";
    int n = str.length();
    int i = 0;
    int j = n-1;
    while(i <= n){
        int temp = str[0];
        str[0] = str[n-1];
        str[n-1] = temp;
        i++;
        j--;
    }
    cout << str;
}