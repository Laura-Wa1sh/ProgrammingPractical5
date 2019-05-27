//
//  FindMax.hpp
//  TestRevisionP5
//
//  Created by Laura Walsh on 30/04/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#ifndef FindMax_hpp
#define FindMax_hpp

#include <iostream>
using namespace std;

template <typename T> int find_max(T* array, int length){
    T max =0;
    int pos;
    for(int i=0; i< length; i++){
        if(array[i] > max){
            max = array[i];
            pos =i;
        }
    }

    cout << "Maximum value is: " << max << endl;
    cout << "Found at position: " << pos << endl;
    return pos;
    
}






#endif /* FindMax_hpp */
