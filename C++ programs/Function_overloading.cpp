#include <iostream>
using namespace std;

int Area(int a, int b) {return (a * b);}
int Area(int c) {return (c* c);}

int main(){
    int x = 10, y = 12, z = 5, t;
    t = Area(x, y);  // int Area(int, int)
    cout<<"Area of Rectangle = "<<t;

    int u;
    u = Area(z);  // int Area(int)
    cout<<" Area of Square = "<<u<<endl;
}