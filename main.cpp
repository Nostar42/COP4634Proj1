#include <iostream>
#include "toke.hpp"

int main(){
    Toke T1;
    char cstr1[] = "This is a test string   test";
    std::cout << cstr1;
    T1.DisplayTokenize(cstr1);
    return 0;
}
