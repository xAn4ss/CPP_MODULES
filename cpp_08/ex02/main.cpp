#include "MutantStack.hpp"

int main(){
    
    try {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        std::cout << "-----" << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it= mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
        std::cout << *it << std::endl;
        ++it;
        }
        std::cout << "-----" << std::endl;
        MutantStack<int> s(mstack);
        it = s.begin();
        ite = s.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            it++;
        }
        std::cout << "-----" << std::endl;
        MutantStack<int> tmp;
        tmp = s;
        it = tmp.begin();
        ite = tmp.end();
        while (it != ite)
        {
            std::cout << *it << std::endl;
            it++;
        }
        std::cout << "-----" << std::endl;

        // return 0;  
    }catch ( std::exception &e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}