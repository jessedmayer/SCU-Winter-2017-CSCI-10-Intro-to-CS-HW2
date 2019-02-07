#include <iostream>

using namespace std;

int main(){
int integer;


    cout << "Input integer between 0 and 6"<<endl;
    cin>>integer;
if (integer==0){
    cout<<"Sunday"<<endl;}
else if (integer==1){
    cout<<"Monday"<<endl;}
else if (integer==2){
    cout<<"Tuesday"<<endl;}
else if (integer==3){
    cout<<"Wednesday"<<endl;}
else if (integer==4){
    cout<<"Thursday"<<endl;}
else if (integer==5){
    cout<<"Friday"<<endl;}
else if (integer==6){
    cout<<"Saturday"<<endl;}
else{
    cout<<"Error Message, integer not between 0 and 6"<<endl;}
    return 0;
}
