#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main()
{
    char c = "ABC"[rand()%3];
    int x = rand()%3;
    std::cout << x << std::endl;
    int d = rand()%3;
    std::cout << d << std::endl;
    std::cout << c << std::endl;
}