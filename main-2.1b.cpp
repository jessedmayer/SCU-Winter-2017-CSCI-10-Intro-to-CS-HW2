#include <iostream>

using namespace std;

int main() {
double price;
int age;
//ticket cost=5
    cout << "Input age" <<endl;
    cin >> age;

if (age<5){
    price=5*0;}
else if ((age>5) && (age<12)){
    price=5*(.5);}
else if ((age>12) && (age<26)){
    price=5*(.9);}
else if (age>60){
    price=5*(.75);}
else{
    price=5;}

cout<<"cost of ticket is "<<price<<endl;

    return 0;

}
