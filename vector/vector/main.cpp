//
//  main.cpp
//  vector
//
//  Created by Pravesh Bawangade on 20/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

struct Corners{
    float a,b,c,d;
};

ostream& operator<<(ostream& stream, const Corners& corner){
    stream << corner.a << " " << corner.b << " " << corner.c << " " << corner.d;
    return stream;
}

int main() {
    vector<int> inty;
    inty.push_back(21);
    inty.push_back(34);
    inty.push_back(45);
    inty.push_back(66);
    inty.push_back(23);
    
    for (auto i = inty.begin(); i != inty.end(); ++i) {
        cout << *i << endl;
    }
    
    vector<Corners> corners;
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});
    
    for (int i =0 ;i < corners.size(); ++i) {
        cout << corners[i] << endl;
    }
    return 0;
}
