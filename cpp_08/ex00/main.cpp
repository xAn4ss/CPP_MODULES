#include "easyfind.hpp"
#include <vector>
#include <list>

int main(){
    try {

        std::list<int> ver;
        srand(time(NULL));
        for (int i = 0; i < 8; i++)
            ver.push_back(rand()%15);
        std::list<int>::iterator it = ver.begin();
        while (it != ver.end())
            std::cout << *it++ << std::endl;
        it = easyfind(ver, 1);
        std::cout << "match at "<< std::distance(ver.begin(), it) << 
        " value is "<< *it << std::endl;
    }
    catch (std::exception &e){
        std::cout << "no occurence." << std::endl;
    }
}