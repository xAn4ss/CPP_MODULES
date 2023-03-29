#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    protected:
        std::string _ideas[100];
    public:
        Brain();
        ~Brain();
        Brain(const Brain& copied);
        Brain& operator=(const Brain& rval);
        std::string& get(int i);
        void set(int i, std::string idea);
};


#endif 