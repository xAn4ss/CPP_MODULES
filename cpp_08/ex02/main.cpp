#include "mutantStack.hpp"

int main(){
    
    try {
        MutantStack<int> stack;
    }catch ( std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}