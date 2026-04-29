#include<iostream>
using namespace std;

class Laptop {
private:
    string name;
    int price;
    string proccesser;

public:
    void setdata() {
        cout <<"Enter the name of the laptop :- ";
        cin >> name;
        cout <<"Enter the price of laptop :- ";
        cin >> price;
        cout <<"Enter the proccesser of the laptop :- ";
        cin >> proccesser;
    }

    void getdata() {
        cout<< "The name of the laptop :- " << name <<endl;
        cout<< "The price of the laptop :- " << price <<endl;
        cout<< "The proccesser of the laptop :- " << proccesser <<endl;
    }
    
   
    Laptop(string error){
        cout << error << endl;
    }
};

int main() {
    string e;
    e = "The constructor";
    
    Laptop l1(e);   
    l1.setdata();
    l1.getdata();
}