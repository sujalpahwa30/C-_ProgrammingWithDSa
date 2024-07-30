#include<iostream>
#include<fstream> 
#include<string>
using namespace std;
int main(){
    string filename = "text.txt";
    ifstream inputFile(filename);
    if(inputFile.is_open()){
        cout << "File opened successfully";
        string line;
        while(getline(inputFile , line)){
            cout << line;
        }
    }
    else{
        cout << "Failed to open file";
    }
}