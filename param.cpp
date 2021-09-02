#include "param.hpp"

void Param::printParams() {
    std::cout << "InputRedirect:["<<
        ((inputRedirect != NULL)?inputRedirect:"NULL") << "]"<< std::endl <<
        "OutputRedirect:["<<
        ((outputRedirect != NULL)?outputRedirect:"NULL") << "]"<< std::endl <<
        "Background: ["<< background << "]"<< std::endl <<
        "ArgumentCount: ["<< argumentCount<< "]"<< std::endl;
    for (int i = 0; i < argumentCount; i++)
        std::cout << "ArgumentVector[" << i << "]: [" <<
            argumentVector[i]<< "]"<< std::endl;
}
