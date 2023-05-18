#include "Span.hpp"
#define NBR 8
#include <list>
int main()
{
    // {
    //     Span span(NBR);
    //     srand(time(NULL));
    //     try
    //     {
    //         for (size_t i = 0; i < NBR; i++)
    //         {
    //             span.addNumber(rand() % 50);
    //         }        
    //         for (size_t i = 0; i < NBR; i++)
    //         {
    //             std::cout << span[i] << std::endl;
    //         }
    //         std::cout << "================" << std::endl;
    //         std::cout << "longest span is : " << span.longestSpan() << std::endl;
    //         std::cout << "----------------" << std::endl;
    //         std::cout << "shortest span is :" << span.shortestSpan() << std::endl;
    //         std::cout << "<><><><><><><><>" << std::endl;
    //     }
    //     catch(std::exception &e)
    //     {
    //         std::cerr << e.what() << '\n';
    //     }
    // }
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.printElement();
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    {
        Span span(NBR);
        std::vector<int> vec;
        srand(time(NULL));
        try
        {
            for (size_t i = 0; i < NBR; i++)
            {
                vec.push_back(rand() % 50);
            }  
            span.addNumbers(vec.begin(), vec.end());
            span.printElement();
            std::cout << span.longestSpan() << std::endl;
            std::cout << span.shortestSpan() << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    
    return 0;
}