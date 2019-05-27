//
//  TestSet.cpp
//  TestRevisionP5
//
//  Created by Laura Walsh on 01/05/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#include <stdio.h>
#include<iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    
    set<int> iset;
    iset.insert(5);
    iset.insert(9);
    iset.insert(1);
    iset.insert(8);
    iset.insert(3);
    iset.insert(3);
    
    cout << "iset contains: " ;
    
    set<int>::iterator it;
    for(it=iset.begin(); it != iset.end(); it++)
        cout << " " << *it;
    cout << endl;
    
    int searchFor;
    cin >> searchFor;
    if(binary_search(iset.begin(), iset.end(), searchFor))
        cout << "Found " << searchFor << endl;
    else
        cout << "Did not find " << searchFor << endl;
    
    return 0;
}
