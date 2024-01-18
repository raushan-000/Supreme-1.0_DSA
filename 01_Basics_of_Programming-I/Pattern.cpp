#include <iostream>

int main()
{
    // solid rectangle

    for (int row = 0; row < 4; row = row + 1)
    {
        for (int col = 0; col < 5; col += 1)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // Hollow Rectangle

    for (int row = 0; row < 3; row += 1)
    {
        // first row or last row --> print 5 *
        if (row == 0 || row == 2)
        {
            for (int col = 0; col < 5; col += 1)
            {
                std::cout << "* ";
            }
        }
        else
        {
            // remaining middle rows
            // first star
            std::cout << "* ";
            // spaces
            for (int col = 0; col < 3; col += 1)
            {
                std::cout << "  ";
            }
            // last star
            std::cout << "* ";
        }
        std::cout << std::endl;
    }


    for (int row = 0; row < 6; row += 1)
    {
        // first row or last row --> print 5 *
        if (row == 0 || row == 5)
        {
            for (int col = 0; col < 5; col += 1)
            {
                std::cout << "* ";
            }
        }
        else
        {
            // remaining middle rows
            // first star
            std::cout << "* ";
            // spaces
            for (int col = 0; col < 3; col += 1)
            {
                std::cout << "  ";
            }
            // last star
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}