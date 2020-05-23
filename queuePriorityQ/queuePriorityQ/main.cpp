//
//  main.cpp
//  queuePriorityQ
//
//  Created by Pravesh Bawangade on 23/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int main() {
    queue<int> myq;
    myq.push(10);
    myq.push(12);
    myq.push(14);
    myq.push(16);
    
    cout << myq.front() << endl;
    cout << myq.back() << endl;
    myq.pop();
    cout << myq.front() << endl;
    while(!myq.empty()){
        cout << " "<< myq.front();
        myq.pop();
    }
    
    cout << endl;
    priority_queue<int> mypq;
    mypq.push(20);
    mypq.push(22);
    mypq.push(24);
    mypq.push(26);
    
    while(!mypq.empty()){
        cout << " "<< mypq.top();
        mypq.pop();
    }
    
    return 0;
}
