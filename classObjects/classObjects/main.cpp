//
//  main.cpp
//  classObjects
//
//  Created by Pravesh Bawangade on 19/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

class Phone{
    string _name="";
    string _os = "";
    int _price = 0;
    
public:
    Phone();//default
    Phone(const string & name, const string & os, const int & price);
    Phone(const Phone &);//copy constructor
    string getName(){return _os;}
    int getPrice();
    ~Phone();//destructor
};

int Phone::getPrice(){
    printf("value of getPrice is %p\n", this);
    return _price;
}

Phone::Phone() : _name(), _os("ANdy") , _price(){
    puts("default constructor");
}

Phone::Phone(const string & name, const string & os, const int & price): _name(name), _os(os) , _price(price){
    puts("param constructor");
}

Phone::Phone(const Phone & values){
    puts("copy constructor");
    _os = "skinned - "+values._os;
    _name = values._name;
    _price = values._price;
}

Phone::~Phone(){
    cout<<"destructor  - "<< _name <<endl;
}

int main() {
    Phone samsungA1;
    cout << samsungA1.getName() << endl;
    
    Phone onePlus8("Oneplus8", "Oxygen", 30000);
    cout << onePlus8.getName() << endl;
    
    printf("value of object is %p\n", &onePlus8);
    cout << onePlus8.getPrice() << endl;
    
    Phone onePlus8s = onePlus8;
    cout << onePlus8s.getName() << endl;
    
    return 0;
}
