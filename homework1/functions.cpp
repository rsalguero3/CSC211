#include "functions.h"
#include <iostream>

#include <algorithm>
using namespace std;

//get the integers reference values and swap numbers to the right
void rotate(int& x, int& y, int& z){
    int temp = x;
    x = z;
    z = y;
    y = temp;
}

//using the sort function and loop through both arrays checking if they are equal
bool same_elements(int a[], int b[], int n){
    sort(a, a + n);
    sort(b, b + n);
    for (int i = 0; i < n; i++){
        if (!(a[i] == b[i])){
            return false;
        }
        
        }
    return true;
    }