//
//  main.cpp
//  search
//
//  Created by Pravesh Bawangade on 21/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int numbers[6] = {6,5,4,3,2,1};
    cout << "unsorted values : " << endl;
    for(int n : numbers){
        cout << n << " ";
    }
    sort(numbers, numbers+6);
    
    if (binary_search(numbers, numbers+6, 2)) {
        puts("Number found");
    }
    else{puts("Number NOT found");}
    
    
    cout << "sorted values : " << endl;
    for(int n : numbers){
        cout << n << " ";
    }
    return 0;
}
