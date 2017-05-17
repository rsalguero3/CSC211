/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   same_elements.cpp
 * Author: Ricardo
 * 
 * Created on May 22, 2016, 9:44 AM
 */

#include "same_elements.h"
#include <algorithm>
#include <iostream>


using namespace std;

same_elements::same_elements(){
    
}

bool same_elements::check_elements(int a[], int b[], int n) {
    //if (!(sizeof(b) == sizeof(a))){
      //  return false;
    //}
    int sizea = sizeof(a)/ sizeof(a[0]);
    int sizeb = sizeof(b)/ sizeof(b[0]);
    sort(a, a + sizea);
    sort(b, b + sizeb);
    for (int i = 0; i < sizea; i++){
        if (!(a[i] == b[i])){
            return false;
        }
        
        }
    return true;
    }





