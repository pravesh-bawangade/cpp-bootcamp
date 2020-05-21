//
//  main.cpp
//  partition
//
//  Created by Pravesh Bawangade on 21/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> myints = {1,2,3,4,5,6,7,8,9,10};
    for(int x: myints){
        cout << x << " ";
    }
    cout << endl;
    partition(begin(myints), myints.end(), [](auto x){return x%2 ==0;});
//    stable_partition(begin(myints), myints.end(), [](auto x){return x%2 ==0;});
    for(int x: myints){
        cout << x << " ";
    }
    return 0;
}
