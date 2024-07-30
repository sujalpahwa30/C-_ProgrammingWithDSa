#include<iostream>
#include<vector>
using namespace std;
int largestAltitude(vector<int> &arr){
    int n = arr.size();
    vector<int>nums(n+1);
    nums[0] = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j < nums.size(); j++){
            nums.push_back(arr[i] + nums[i]);
        }
    }
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    int max = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] > max) max = arr[i];
    }
    return max;
}
int main(){
    vector<int>arr = {-5,1,5,0,7};
    cout << largestAltitude(arr);
}