#include <iostream>
using namespace std;
int main() {
    int x;
    cin>>x;
    int arr[5];
    cout<<"Enter 5 elements for the array"<<endl;
    for(int i=0;i<5;i++) cin>>arr[i];
    int count = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i + 1; j < 5; j++){
            for(int k = j + 1; k < 5; k++){
                if(arr[i] + arr[j] == arr[k]){
                    count++;
                    }
                }
            }
        }
    cout<<count<<endl;
}