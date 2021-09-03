#pragma once
#include <string>
#include <cstring>
#include <iostream>
#define MAXARGS 32

class Toke {
    private:
        char* Tokenize(char str1[]);
    public:
        void DisplayTokenize(char str1[]);
    
};
