#include <iostream>

using namespace std;

int main(){
double b,h,area;

    cout<<"Input b"<<endl;
    cin>>b;
    cout<<"Input h"<<endl;
    cin>>h;
if ((b>0) && (h>0)){
area=(b*h)/2;
cout<<"area is "<<area<<endl;

}
else {
    cout<<"Error Message, please use positive values"<<endl;
}
    return 0;
}
