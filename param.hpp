#pragma once
#define MAXARGS 32
#include <iostream>

class Param {
    private:
        char *inputRedirect;
        char *outputRedirect;
        int background;
        int argumentCount;
        char *argumentVector[MAXARGS];
    public:
        void printParams();
};
