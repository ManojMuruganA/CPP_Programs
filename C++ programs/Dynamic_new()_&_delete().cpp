#include <iostream>

using namespace std;

int main(){
    int *p = (int *)operator new(sizeof(int));
    *p = 5;

    cout<<*p;  // Prints : 5

    delete p;
}