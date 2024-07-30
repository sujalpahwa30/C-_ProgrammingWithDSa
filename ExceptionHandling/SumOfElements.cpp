#include<iostream>
using namespace std;
template <class T , int max> sumofArray(T arr[] , int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Sum of elements : ";
    cout << sumofArray<int , 100>(arr , n);
}