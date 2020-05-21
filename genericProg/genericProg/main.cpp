//
//  main.cpp
//  genericProg
//
//  Created by Pravesh Bawangade on 21/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

template<typename T>
T getBigger(T a, T b){
    return (a > b) ? a : b;
}

int main() {
    
    cout << getBigger(3.56, 3.57) << endl;
    
    return 0;
}
