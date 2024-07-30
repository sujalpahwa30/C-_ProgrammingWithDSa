#include<iostream>
#include<stack>
using namespace std;
int main(){
    // int arr[] = {3,1,2,5,4,6,2,3};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    // ## Brute Force solution 

    // Next Greater Element Array
    // int nge[n];
    // for(int i = 0; i < n; i++){
    //     nge[i] = -1;
    //     for(int j = i+1; j < n; j++){
    //         if(arr[j] > arr[i]){
    //             nge[i] = arr[j];
    //             break;
    //         }
    //     }
    // }
    // for(int i = 0; i < n; i++){
    //     cout << nge[i] << " ";
    // }
    // cout << endl;


    // ## Using Stack 
    
    // Using a stack : Pop , Ans , Push and reverse traverse
    // S.C. = O(n) , T.C. = O(n)
    int arr[] = {4,1,2,5,4,3,4,8,2,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    stack<int>st;
    int nge[n];
    nge[n-1] = -1;
    st.push(arr[n-1]);
    for(int i = n-2; i >= 0; i--){
        // Pop all the elements smaller than arr[i]
        while(st.size() > 0 && st.top() <= arr[i]){
            st.pop();
        }
        // Mark the ans in nge array
        if(st.size() == 0) nge[i] = -1;
        else nge[i] = st.top();
        // Push the arr[i]  
        st.push(arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout << nge[i] << " ";
    }
    cout << endl;
}