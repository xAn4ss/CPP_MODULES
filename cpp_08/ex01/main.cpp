#include "Span.hpp"
#define NBR 10
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
    // // 
    //         std::cout << "================" << std::endl;
    //         std::cout << "longest span is : " << span.longestSpan() << std::endl;
    //         std::cout << "----------------" << std::endl;
    //         std::cout << "shortest span is :" << span.shortestSpan() << std::endl;
    //         std::cout << "<><><><><><><><>" << std::endl;
    //     //     for (size_t i = 0; i < NBR; i++)
    //     //     {
    //     //         std::cout << span[i] << std::endl;
    //     //     }
    //     }
    //     catch(std::exception &e)
    //     {
    //         std::cerr << e.what() << '\n';
    //     }
    // }
    {
        Span span(NBR);
        std::vector<int> vec;
        srand(time(NULL));
        try
        {
            for (size_t i = 0; i < NBR-1; i++)
            {
                vec.push_back(rand() % 50);
            }  
            span.addNumbers(vec.begin(), vec.end());
            span.printElement();
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    // {
        // Span sp = Span(10);
        // sp.addNumber(6);
        // sp.addNumber(3);
        // sp.addNumber(17);
        // sp.addNumber(9);
        // sp.addNumber(11);
        // std::cout << sp.shortestSpan() << std::endl;
        // std::cout << sp.longestSpan() << std::endl;
    // }
    
    return 0;
}