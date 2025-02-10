#include <iostream>

using namespace std;

int main(){
    int *p = new int(5);

    cout<<*p;  // Prints : 5

    delete p;
}