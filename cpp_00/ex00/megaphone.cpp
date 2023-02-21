#include <iostream>

using namespace std;

int main(int ac, char **av)
{
    int i = 1;
    int y;
    if (ac > 1)
    {
        while (i < ac)
        {
            y = 0;
            while (av[i][y])
            {
                cout << (char)toupper(av[i][y]);
                y++;
            }
            cout << " ";
            i++;
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    cout << endl;
}