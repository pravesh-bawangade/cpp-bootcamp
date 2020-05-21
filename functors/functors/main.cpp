//
//  main.cpp
//  functors
//
//  Created by Pravesh Bawangade on 21/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

class MyFloat{
    float ft;
public:
    MyFloat(){
        ft = 0.1;
    }
    void getValue(){
        cout << ft << endl;
    }
    void operator ()(float v){
        ft += v;
    }
};

int main() {
    MyFloat floaty;
    floaty.getValue();
    
    floaty(0.5);
    floaty.getValue();
    return 0;
}
