#include <iostream>
using namespace std;

int Add(int a = 10, int b = 20){
    return (a + b);
}

int main(){
    int x = 5,y = 6,z;

    z = Add(x,y);  // Usual function call -- a = x = 5 & b = y = 6
    cout<<"Sum = "<<z<<endl;

    z = Add(x);    // One parameter defaulted -- a = x = 5 & b = 20
    cout<<"Sum = "<<z<<endl;

    z = Add();     // Both parameter defaulted -- a = 10 & b = 20
    cout<<"Sum = "<<z<<endl;
}