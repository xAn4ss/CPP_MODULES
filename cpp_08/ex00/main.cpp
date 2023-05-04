#include "easyfind.hpp"
#include <vector>

int main(){
    try {
        std::vector<int> ver = {1, 2, 3, 4, 5};
        easyfind(ver, 2);
    }
    catch (std::exception &e){
        std::cout << "no occurence." << std::endl;
    }
}