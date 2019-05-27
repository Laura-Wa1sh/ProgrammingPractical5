//
//  s_array.hpp
//  TestRevisionP5
//
//  Created by Laura Walsh on 30/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#ifndef s_array_hpp
#define s_array_hpp

#include <stdio.h>
#include<iostream>
using namespace std;


template<typename T> class s_array{
public:
    s_array(int size);
    ~s_array();
    
    T &operator[](int i);
private:
    int size;
    T *data;
};

template<typename T>
s_array<T>::s_array(int size):size(size){
    if(size > 0) data = new T[size];
    else {
        cout << "invalid array size" << size << endl;
        exit(1);
    }
}

template<typename T>
s_array<T>::~s_array(){
    delete[] data;
}

template<typename T>
T &s_array<T>::operator[](int i){
    if(i<0|| i>=size){
        cout << "index " << i << " is out of bounds " << endl;
        exit(1);
    }
    return data[i];
}



#endif /* s_array_hpp */
