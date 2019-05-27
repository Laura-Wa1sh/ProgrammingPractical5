//
//  main.cpp
//  TestRevisionP5
//
//  Created by Laura Walsh on 30/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#include "FindMax.hpp"
#include "s_array.hpp"
#include <iostream>
#include <cmath>
using namespace std;

int main1(){
    // int array test
    int i_array_len = 10;
    int* i_array = new int[i_array_len];
    for (int i = 0; i < i_array_len; i++)
        i_array[i] = rand() % 1000;
    
    for (int i = 0; i < i_array_len; i++) cout << i_array[i] << " ";
    cout << "\nmax value at index " << find_max(i_array, i_array_len) << endl;
    
    delete[] i_array;
    
    // double array test
    int d_array_len = 20;
    double* d_array = new double[d_array_len];
    for (int i = 0; i < d_array_len; i++)
        d_array[i] = sqrt(rand() % 1000);
    
    for (int i = 0; i < d_array_len; i++) cout << d_array[i] << " ";
    cout << "\nmax value at index " << find_max(d_array, d_array_len) << endl;
    
      delete[] d_array;
    
    
    return 0;
}
    
    int main2(){
    
    // s_Array template test
    
    s_array<int> array(10); // create a 10 element int array
    
    array[5] = 5; // in bound access
    cout << array[5] << endl;
    
    array[-1] = 2; //out bound access
    cout << array[15];
    
    s_array<double> d_array(20);    // create a 20-element double array
    for (int i = 0; i < 20; i++)    // in-bound access
        d_array[i] = sqrt(i);
    cout << d_array[4] << endl;
    cout << d_array[20] << endl;    // out-of-bound access
    
    s_array<char> c_array(26);    // create a 26-element char array
    for (int i = 0; i < 26; i++)    // in-bound access
        c_array[i] = 'a' + i;
    cout << c_array[4] << endl;
    c_array[-3] = 'X';                // out-of-bound accesses


    return 0;
}
