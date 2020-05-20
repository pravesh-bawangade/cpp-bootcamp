//
//  main.cpp
//  file
//
//  Created by Pravesh Bawangade on 20/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    static const char *originalFile = "originalFile.txt";
    static const char *renameFile = "renameFile.txt";
    
//    rename(originalFile, renameFile);
    remove(renameFile);
//    FILE * fh = fopen(originalFile, "w");
//    fclose(fh);
    return 0;
}
