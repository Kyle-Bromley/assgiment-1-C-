/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 20, 2019, 5:59 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "Triangle.h";
/*
 * 
 */

void createTriangle(Triangle *, int);

int main(int argc, char** argv) {
    
     srand(static_cast<unsigned int>(time(0)));
     
     Triangle *tri = new Triangle;
     int row = 10;
     
     createTriangle(tri, row);
     
     tri->printTriangle();
     
     delete tri;

    return 0;
}

void createTriangle(Triangle * tri, int s){
    tri->setSize(s);
    tri->setData();
}
