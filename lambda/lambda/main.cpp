//
//  main.cpp
//  lambda
//
//  Created by Pravesh Bawangade on 20/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    []{puts("Hello world");}();
    [](){return 100;};
    
    auto sum = [](auto a, auto b){return a + b;};
    cout << sum(2,5) << endl;
    cout << sum(2.56,5.78) << endl;
    string a = "wef";
    string b = "dfwrf";
    cout << sum(a, b) << endl;
    return 0;
}
