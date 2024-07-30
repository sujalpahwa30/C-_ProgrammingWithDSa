#include<iostream>
using namespace std;
class TollBooth{
    unsigned int totalcars;
    double totalcash;
    public:
    TollBooth(){
        totalcars = totalcash = 0.0;
    }
    void payingCar(){
        totalcars++;
        totalcash += 0.50;
    }
    void nonpayCar(){
        totalcars++;
    }
    void display(){
        cout << " Total cars : " << totalcars << endl;
        cout << " Total cash : " << totalcash << endl;
    }
};
int main(){
    TollBooth booth;
    char choice;
    cout << "TollBooth program ";
    cout << "Press P for paying car , 'N' for non paying , or 'Q' to Quit ";
    while(true){
        cout << "Enter choice : ";
        cin >> choice;
        if(choice == '1' || choice == 'p'){
            booth.payingCar();
            cout << "Paying car added ";
        }
        else if(choice == 'Q' || choice == 'q'){
            break;
        }
        else{
            cout << "Invalid choice , Please enter 'P' , 'N' or 'Q' ";
        }
    }
    cout << "TollBooth summary ";
    booth.display();
}