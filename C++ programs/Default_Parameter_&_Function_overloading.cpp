#include <iostream>
using namespace std;

// Overloaded Area functions
int Area(int a, int b=10) { return (a* b); } 
double Area (double c, double d) { return (c * d); }

int main() { int x=10, y=12, t; double z=20.5, u=5.0, f; 
    t = Area(x); // Binds int Area(int, int = 10) 
    cout << "Area = " << t << endl; // Area 100
    t = Area(x, y); // Binds int Area(int, int = 10) 
    cout << "Area = " << t << endl; // Area= 120

    f = Area(z, u); // Binds double Area (double, double) 
    cout << "Area = " << f << endl; // Area 102.5

    f = Area(z); // Binds int Area(int, int = 10) 
    cout << "Area = " << f << endl; // Area 200

    // Un-resolvable between int Area(int a, int b = 10) and double Area (double c, double d) 
    //f = Area(z, y); // Error: call of overloaded Area (double&, int&) is ambiguous
}