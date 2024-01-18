#include <iostream>

int main()
{
    // solid rectangle

    for (int row = 0; row < 3; row = row + 1)
    {
        for (int col = 0; col < 5; col += 1)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}