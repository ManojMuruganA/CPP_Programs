#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int *p = (int *)malloc(sizeof(int));
    *p = 5;

    cout<<*p;  // Prints : 5
    free(p);
}