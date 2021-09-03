#include "toke.hpp"

char* Toke::Tokenize(char str1[]){
    char * Tokens;
    Tokens = strtok(str1," \t\n");
    return Tokens;
}

void Toke::DisplayTokenize(char str1[]){
        char* pch = Toke::Tokenize(str1);
        std::cout << std::endl;
        while(pch != NULL){
            std::cout << pch << std::endl;
            pch = strtok(NULL," \t\n");
        }
}
