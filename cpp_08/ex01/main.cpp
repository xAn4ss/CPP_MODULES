#include "Span.hpp"
#define NBR 10
int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    // Span span(NBR);
    // srand(time(NULL));
    // try
    // {
    //     for (size_t i = 0; i < NBR; i++)
    //     {
    //         span.addNumber(rand() % 50);
    //     }        
    //     for (size_t i = 0; i < NBR; i++)
    //     {
    //         std::cout << span[i] << std::endl;
    //     }

    //     std::cout << "================" << std::endl;
    //     std::cout << span.longestSpan() << std::endl;
    //     std::cout << "----------------" << std::endl;
    //     std::cout << span.shortestSpan() << std::endl;
    //     std::cout << "<><><><><><><><>" << std::endl;
    //     for (size_t i = 0; i < NBR; i++)
    //     {
    //         std::cout << span[i] << std::endl;
    //     }
    // }
    // catch(std::exception &e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    
    
    return 0;
}