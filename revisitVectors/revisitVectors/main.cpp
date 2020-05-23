//
//  main.cpp
//  revisitVectors
//
//  Created by Pravesh Bawangade on 22/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    vector<string> heros {"batman", "flash", "superman", "robin"};
    
    nums.push_back(34);
    nums.push_back(54);
    nums.push_back(56);
    nums.push_back(12);
    
    for (int i = 0; i <= 5; ++i) {
        nums.push_back(i);
    }
    
    cout << nums.size() << endl<< nums.capacity() << endl<< nums.max_size() << endl;
    cout << nums.empty() << endl;
    
    for (auto i = nums.begin(); i != nums.end(); ++i) {
        cout << *i << endl;
    }
    
    return 0;
}
