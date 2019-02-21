/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Triangle.h
 * Author: rcc
 *
 * Created on February 20, 2019, 5:59 PM
 */

#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle{
    
private:
    int size;
    int **data;
    
public:
    void setSize(int s){
        size = s;
    }
    void setData(){
        
        data = new int * [size];
        
       for(int row=0;row<size;row++){
           data[row] = new int[row + 1];
       }
        for(int row=0;row<size;row++){
        for(int col=0;col<row;col++){
            data[row][col]=rand()%90+10;
        }
        }
    }
        
        int getsize(){};
        
        void printTriangle(){
             
            for(int row=0;row<size;row++){
        for(int col=0;col<row;col++){
           cout <<  data[row][col] << " ";
        }
            cout << endl;
        }
            cout << endl;
        }
        
        ~Triangle(){
        for(int row=0;row<size;row++){
          delete[] data[row];
       }
        delete []data;
    }
    
};



#endif /* TRIANGLE_H */

