#include<iostream>
using namespace std;
// int main() {
//     // int n;
    // cin >> n;
    // for(int i = 2; i <= n-1; i++){
    //     if(n % i == 0){
    //         cout << "The number is composite";
    //         break;
    //     }
    //     else{
    //         cout << "The number is prime";
    //         break;
    //     }
    // }
    
    // int i , j , count = 0;
    // for(int i = 1; i <= 20; i++){
    //     for(int j = 2; j < i; j++){
    //         if(i % j == 0){
    //             count++;
    //             break;
    //         }
    //     }
    //     if(count == 0 && i != 1) {
    //         cout << i;
    //         count = 0;
    //     }
    // }
    // int a = 5;
    // int b = 4;
    // swap(a , b);
    // cout << a << " " << b;

class shop{
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
    void initcounter(void){counter = 1;}
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void){
    cout << "Enter the ID of your item : " << endl;
    cin >> itemID[counter];
    cout << "Enter the Price of Item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice(void){
    for(int i = 0; i < counter; i++){
        cout << "The price of the item " << itemID[i] << "is" << itemPrice << endl;
    }
}

    int main(){
        shop abp;
        abp.initcounter();
        abp.setPrice();
        abp.setPrice();
        abp.setPrice();
        abp.setPrice();
        abp.setPrice();
        abp.displayPrice();
        return 0;
    }


