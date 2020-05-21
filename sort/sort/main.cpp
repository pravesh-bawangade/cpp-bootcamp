//
//  main.cpp
//  sort
//
//  Created by Pravesh Bawangade on 21/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float numbers[6] = {6.4,5.6,4.1,3.7,2.3,1.7};
    cout << "unsorted values : " << endl;
    for(float n : numbers){
        cout << n << " ";
    }
    sort(numbers, numbers+6);
    cout << "sorted values : " << endl;
    for(float n : numbers){
        cout << n << " ";
    }
    return 0;
}
