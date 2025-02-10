#include <iostream>
using namespace std;

int main(){
    int i = 2;
    int& j = i;
    const int& k = 5;  // const tells compiler to allocate with the value 5
    const int& l = j + k;  // Similarly for j + k = 7 for l to refer to

    cout << i << ", " << &i << endl;  // Prints: 2, 0x61fef8
    cout << j << ", " << &j << endl;  // Prints: 2, 0x61fef8
    cout << k << ", " << &k << endl;  // Prints: 5, 0x61fefc
    cout << l << ", " << &l << endl;  // Prints: 7, 0x61ff00
}