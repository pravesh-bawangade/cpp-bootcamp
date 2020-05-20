//
//  main.cpp
//  moveSemantics
//
//  Created by Pravesh Bawangade on 20/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp = move(a);
    a = move(b);
    b = move(tmp);
}

string printme(){
    return "I am print.";
}

int main() {
    int a = 3;
    int b = 6;
    swap(a,b);
    cout << "a :" << a << " b :" << b <<endl;
    string s = printme();
    string&& ss = printme();
    cout<<ss;
    return 0;
}
