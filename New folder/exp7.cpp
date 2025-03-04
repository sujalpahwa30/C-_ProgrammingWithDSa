#include<iostream>
using namespace std;
class DB;
class DM{
    int m;
    double cm;
    public:
    void input(){
        cout << "Enter distance in meter centimeter : ";
        cin >> m >> cm;
    }
    void show(){
        cout << "Distance " << m << "ms" << cm << "cm";
    }
    int getm(){
        return m;
    }
    double getcm(){
        return cm;
    }
    friend DM add(DM , DB);
};
class DB{
    int ft;
    double in;
    public:
    DB(){
        ft = in = 0;
    }
    DB(DM dm){
        double xin;
        xin = (dm.getm()*100 + dm.getm())*0.394;
        ft = xin/12;
        in = xin - (ft*12);
    }
    void input(){
        cout << "Enter distance in feet inches : ";
        cin >> ft >> in;
    }
    void show(){
        cout << "Distance " << ft << "fts" << in << "inches";
    }
    friend DM add(DM , DB);
};
DM add(DM mc , DB fi){
    DM a;
    double cm , in , xcm , xin;
    cm = mc.m*100 + mc.cm;
    in = fi.ft*12 + fi.in;
    xcm = cm + in*2.54;
    xin = in + cm*0.394;
    a.m = xcm/100;
    a.cm = xcm - (a.m*100);
    return a;
}
int main(){
    DM a;
    DB b;
    a.input();
    b.input();
    cout << "After adding : ";
    DM c;
    DB d;
    c = add(a,b);
    d = add(a,b);
    c.show();
    d.show();
}