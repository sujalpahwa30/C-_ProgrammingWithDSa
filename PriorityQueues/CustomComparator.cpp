#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
// bool cmp(int a , int b){
//     // 10 > 14 -> false -> picked b (second arguement)
//     // 14 > 10 -> true -> picked a (first arguement)
//     // 5 > 5 -> false -> 5
//     return a > b;
// }
// bool oldcmp(int a , int b){
//     // 10 < 14 -> true -> picked a (first arguement)
//     // 14 < 10 -> false -> picked b (second arguement)
//     return a < b;
// }
// int main(){
//     vector<int>v = {5,4,1,-1,9,8,16,21,12};
//     sort(v.begin() , v.end() , cmp);
//     for(int i = 0; i < v.size(); i++){
//         cout << v[i] << " ";
//     }
// }

// class Product{
//     public:
//     int price;
//     string name;
//     Product(int p , string n){
//         this->price = p;
//         this->name = n;
//     }
// };
// bool cmp(const Product &p1 , const Product &p2){
//     return p1.price < p2.price;  // Product having lesser price will be picked
// }
// int main(){
//     vector<Product>v;
//     Product p1(100 , "abc");
//     Product p2(10 , "def");
//     Product p3(45 , "ghi");
//     v.push_back(p1);
//     v.push_back(p2);
//     v.push_back(p3);
//     sort(v.begin() , v.end() , cmp);
//     for(int i = 0; i < 3; i++){
//         cout << v[i].name << " ";
//     }
// }

bool cmp(int a , int b){
    return a > b;
}
class Customcomparator{
    public:
    bool operator()(int a , int b){
        return a > b;
    }
};
int main(){
   // priority_queue<int , vector<int> , function<bool(int , int)>> pq(cmp);
   priority_queue<int , vector<int> , Customcomparator>pq;
    pq.push(5);
    pq.push(4);
    pq.push(3);
    cout << pq.top();
}