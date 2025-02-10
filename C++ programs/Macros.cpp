#include <iostream>
using namespace std;

#define SQUARE(x) x * x  // #define of SQUARE(x) consumed by CPP

int main(){
    int a=3,b;

    b=SQUARE(a);         // Replaced by CPP as b=a*a;

    cout<<"Square = "<<b<<endl;
}