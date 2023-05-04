#include "easyfind.hpp"
#include <vector>
#include <list>
int main(){
    try {

        std::list<int> ver = {7, 9, 3, 10, 5};
        std::list<int>::iterator it = easyfind(ver, 10);
        std::cout << "kayn f : "<< std::distance(ver.begin(), it) << std::endl;
    }
    catch (std::exception &e){
        std::cout << "no occurence." << std::endl;
    }
}