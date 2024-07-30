#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream Filename;
    Filename.open("Filename.txt" , ios::out);
    if(!Filename){
        cout << "Error while creating the file";
    }
    else{
        cout << "File created and data got written to file";
        Filename << "This is a topic of Exception Handling";
        Filename.close();
    }
}