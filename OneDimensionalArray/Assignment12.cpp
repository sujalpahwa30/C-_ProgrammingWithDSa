#include<iostream>
#include<vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the size of array : ";
    cin >> n;
    int arr[n];
    for(int i = 0; i <= n-1; i++){
        cin >> arr[i] ;
    }
    // int x;
    // cout << "Enter that element : ";
    // cin >> x;
    // int count = 0; 
    // for(int i = 0; i <= n-1; i++){
    //     if(arr[i] > x) count++;
    // }
    // cout << count;

    int max = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] > max) max = arr[i];
    }
    int smax = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if(arr[i] != max && arr[i] > smax) smax = arr[i];
    }
    int tmax = INT_MIN;
    for(int i = 0; i <= n-1; i++){
        if( arr[i] != max && arr[i] != smax && arr[i] > tmax) tmax = arr[i];
    }
    cout << max << endl;
    cout << smax << endl;
    cout << tmax << endl;

      // vector<int>v;
      // int n;
      // cout << "Enter array size : ";
      // cin >> n;
      // cout << "Enter array elements : ";
      // for(int i = 0; i < n; i++){
      //   int x;
      //   cin >> x;
      //   v.push_back(x);
      // }
      // for(int i = 0; i < v.size()-1; i++){
      //   if(v[i-1] > v[i] ) {
      //   cout << "Array is not sorted .";
      //       }
      //   else {
      //   cout << "Array is sorted .";
      //   }
      // }
// int arr[5]={1,2,4,5,7};
// for (int i = 1; i < 5; i++){
// // Unsorted pair found
// if (arr[i - 1] > arr[i]){
// cout<<"no"<<endl;
// return 0;
// }
// }
// // No unsorted pair found
// cout<<"yes"<<endl;



        // int even = 0;
        // int odd = 0;
        // for(int i = 0; i <= n-1; i++){
        //   if(i % 2 == 0) {
        //      even += arr[i];
        // }
        // else{
        //   odd += arr[i];
        // }
        // }
        // cout << even - odd;


        // for(int i = 0; i <= n-1; i++){
        //   if(i % 2 != 0) {
        //     arr[i] = 2 * arr[i];
        //   }
        //   else {
        //     arr[i] += 10;
        //   }
        // }
        // for(int i = 0; i <= n-1; i++){
        //   cout << arr[i] << " ";
        // }


        // for(int i = 0; i <= n-1; i++){
        //   int count = 0;
        //   for(int j = 0; j <= n-1; j++){
        //     if(arr[i] == arr[j])
        //     count++;
        //   }
        //   if(count == 0)
        //   cout << arr[i] << endl;
        // }
        // cout << "No Unique Value .";
        
        
//         int arr[5]={2,2,1,1,20};
// for(int i=0;i<5;i++){
// int count=0;
// for(int j=0;j<5;j++){
// if(arr[i]==arr[j]) count++;
// }
// if(count==0){
// cout<<arr[i];
// return 0;
// }
// }
// cout<<"No unique value.";


//    for(int i = 0; i <= n-1; i++){
//     for(int j = n-1; j >= 0; j--){
//       if(arr[i] == arr[j])
//       cout << "Array is a palindrome .";
//       else
//       cout << "Array is not a palindrome .";
//       break;
//     }
//    }
 }
   



// double getAverage(int arr[], int size);
// int main () {
// int balance[5] = {1000, 2, 3, 17, 50};
// double avg;
// avg = getAverage( balance[0], 5 ) ;
// cout << "Average value is: " << avg << endl;
// }
