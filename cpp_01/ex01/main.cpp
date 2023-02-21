#include "Zombie.hpp"

int main()
{
    int N;
    std::string name;
    std::cout << "enter number of zombies and their name" << std::endl << ">";
    std::cin >> N;
    std::cout << ">" << std::endl;
    std::cin >> name;
    Zombie *zombieHord;
    zombieHord = zombieHorde(N, name);
    for (int i = 0; i < N; i++){
        zombieHord[i].announce();
    }
    delete [] zombieHord;
}