//
//  main.cpp
//  classInheritance
//
//  Created by Pravesh Bawangade on 19/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Man{
    string _name;
    int _age;
    Man(){};
protected:
    Man(const string & name,const int & age): _name(name), _age(age){}
    void run(){puts("I can run");}
public:
    void sayName() const;

};

void Man::sayName()const{
    cout << "My name is "<< _name << " and age is "<< _age << endl;
}

class Superman : public Man{
    bool flight;
public:
    Superman(string name) : Man(name, 26){}
    void run(){puts("I can run at light speed");}
};


class Spiderman : public Man{
    bool webbing;
public:
    Spiderman(string name) : Man(name, 19){}
    void run(){puts("I can run at normal speed");}
};

int main() {
    Superman clark("Kent");
    clark.sayName();
    
    Spiderman peter("peter");
    peter.sayName();
    peter.run();
    return 0;
}
