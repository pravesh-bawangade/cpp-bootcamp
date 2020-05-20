//
//  main.cpp
//  readWriteFile
//
//  Created by Pravesh Bawangade on 20/05/20.
//  Copyright © 2020 Pravesh Bawangade. All rights reserved.
//

#include <iostream>
using namespace std;

constexpr int maxbuffer = 1024;

int main() {
    const char * fileName = "myfile.txt";
    const char * info = "lorem ipsum dolor sit amit";
    
//    FILE * fh = fopen(fileName, "a");
//
//    for (int i = 0; i < 50; ++i) {
//        fputs(info, fh);
//    }
//    fclose(fh);
    
    char buff[maxbuffer];
    FILE * fh = fopen(fileName, "r");
    while (fgets(buff, maxbuffer, fh)) {
        fputs(buff, stdout);
    }
    fclose(fh);
    return 0;
}
