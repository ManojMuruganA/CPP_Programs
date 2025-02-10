#include <iostream>
using namespace std;

void Function_under_param_test(  // Function prototype
    int&,  // Reference parameter
    int);  // Value parameter

int main(){
    int a = 20;
    cout<<"a = "<<a<<", &b = "<<&a<<endl;
    Function_under_param_test(a, a);  //Function call
}
void Function_under_param_test(int& b, int c){  // Function definition
    cout<<"b = "<<b<<", &b = "<<&b<<endl;
    cout<<"c = "<<c<<", &c = "<<&c<<endl;
}