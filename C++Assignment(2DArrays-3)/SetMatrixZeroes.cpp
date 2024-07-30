#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        bool zerothRow = false;
        bool zerothCol = false;
        for(int j = 0; j < n; j++){
            if(matrix[0][j] == 0){
                zerothRow = true;
                break;
            }
        }
        for(int i = 0; i < m; i++){
            if(matrix[i][0] == 0){
                zerothCol = true;
                break;
            }
        }
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }
        for(int j = 1; j < n; j++){
            if(matrix[0][j] == 0){
                for(int i = 1; i < m; i++){
                    matrix[i][j] = 0;
                }
            }
        }
        for(int i = 1; i < m; i++){
            if(matrix[i][0] == 0){
                for(int j = 1; j < n; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        if(zerothRow == true){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }
        if(zerothCol == true){
            for(int i = 0; i < m; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
int main(){
     Solution sol;
    vector<vector<int>> testMatrix = {
        {1, 2, 3},
        {4, 0, 6},
        {7, 8, 9}
    };
    cout << "Original Matrix:" << endl;
    for (const auto& row : testMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    sol.setZeroes(testMatrix);
    cout << "\nMatrix after setZeroes:" << endl;
    for (const auto& row : testMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}