#include<iostream>
using namespace std;
class Student{
public:
   string name;
   int rno;
   float marks;
   //Student(string n , int r , float m){
      // name = n;  
      // rno = r;
   //    // marks = m;
   // Student(string name , int rno , float marks){
   //    this->name = name;
   //    this->rno = rno;
   //    this->marks = marks;
  // }
};
//void change(Student s){
// void change(Student &s){

//    s.name = "Harsh";
// }

void change(Student*s){
   s->name = "Harsh";
}
int main(){
  // Student s;
   // s.name = "Sujal";
   // s.rno = 373;
   // s.marks = 92.6;
   // // cout << s.name << endl;
   // // cout << s.rno << endl;
   // // cout << s.marks << endl;
   // // Student s("sujal" , 373 , 92.6);
   // // cout << s.marks << " " << s.name << " " << s.rno;
   // // cout << endl;
   // // s.name = "Raghav";
   // // cout << s.name << endl;
   // //Student s;
   // cout << s.name << endl;
   // change(s);
   // cout << s.name;

  // Student s();
   // cout << s.name << endl;
   // change(&s);
   // cout << s.name << endl;

   Student*s = new Student();
   //Student s("sujal" , 373 , 92.6);
   cout << s->name << endl;
   change(s);
   cout << s->name;
}