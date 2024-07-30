#include<iostream>
#include<stack> // Header file for using stacks , built in stack 
using namespace std;
int main(){
    stack<int>st;
    // cout << st.size() << endl;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // cout << st.size() << endl;
    // st.pop();
    // cout << st.size() << endl;
    // cout << st.top() << endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // while(st.size() > 0){   // Printing in reverse order -> Emptying the stack 
    //     cout << st.top() << " ";
    //     st.pop();
    // }

    // // We will use extra stack 
    // stack<int>temp;
    // while(st.size() > 0){
    //     int x = st.top();
    //     st.pop();
    //     temp.push(x);
    // }
    // // Putting elements back from temp to st 
    // while(temp.size() > 0){
    //     int x = temp.top();
    //     temp.pop();
    //     st.push(x);
    // }
    // cout << endl;
    // cout << st.top();

    stack<int>temp;
    while(st.size() > 0){
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
   // cout << endl;
    while(temp.size() > 0){
       // cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
    cout << st.top();
}