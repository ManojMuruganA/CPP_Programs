#include <iostream>
using namespace std;

int& Return_ref(int &x){
    return (x);
}

int main(){
    int a = 10, b = Return_ref(a);
    cout<<"a = "<<a<<" and b = "<<b<<endl;
    Return_ref(a) = 3;  // Changes variable a
    cout<<"a = "<<a;
}

/*
int& Return_ref(int &x){
    int t=x;
    t++;
    return(t);  // Changes local t and a = 10
}
*/