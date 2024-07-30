#include<iostream>
#include<string>
using namespace std;
class Employee {
protected:
    float sal;
    string name;
public:
    void setName() {
        cout << "Enter name: ";
        cin >> name;
    }
    void setSalary() {
        cout << "Enter salary: ";
        cin >> sal;
    }
};
class Manager : public Employee {
protected:
    string dep;
public:
    void getData() {
        setName();
        cout << "Enter department: ";
        cin >> dep;
        setSalary();
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Salary: " << sal << endl;
        cout << "Department: " << dep << endl;
    }
};
class Executive : public Manager {
public:
    void display(Manager m) {
        cout << "Executive: ";
        m.display();
    }
};
int main() {
    Manager m1;
    m1.getData();
    m1.display();
    Executive e;
    e.display(m1);
}


