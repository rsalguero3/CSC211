/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   rotate.cpp
 * Author: Ricardo
 * 
 * Created on May 21, 2016, 3:12 PM
 */

#include "rotate.h"

//get the integers reference values and swap numbers to the right
void rotate::rotate(int& x, int& y, int& z) {
    int temp = x;
    x = z;
    z = y;
    y = temp;
}


