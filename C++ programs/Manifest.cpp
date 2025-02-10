#include <iostream>  // Contents of <iostream> header replaced by CPP
#include <cmath>     // Contents of <cmath> header replaced by CPP
using namespace std;

#define TWO 2              // #define of TWO consumed by CPP
#define PI 4.0*atan(1.0)   // #define of PI consumed by CPP

int main(){
    int r=10;
    double peri = TWO * PI * r;        //double peri 24.0*atan (1.0) * r; // Replace by CPP
    cout<<"Perimeter = "<<peri<<endl;
}