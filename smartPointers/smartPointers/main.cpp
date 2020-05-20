//
//  main.cpp
//  smartPointers
//
//  Created by Pravesh Bawangade on 20/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <memory>
using namespace std;

class User{
public:
    User(){cout << "User created\n";}
    ~User(){cout << "User destroyed\n";}
    void testFunc(){puts("Test function.");}
};

int main() {
    
    {
//        unique_ptr<User> sam(new User());
        unique_ptr<User> sam = make_unique<User>();
        sam->testFunc();
//        unique_ptr<User> samm = sam; // not allowed.
    }
    
    {
        shared_ptr<User> tim = make_shared<User>();
        weak_ptr<User> wtim = tim;
        shared_ptr<User> timm = tim;
        tim->testFunc();
    }
    
    
    puts("outside code");
    return 0;
}
