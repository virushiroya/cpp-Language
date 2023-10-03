#include <iostream>

int main()
{
    int unit, total;
    std::cout << "Enter unit: ";
    std::cin >> unit;

    if (unit >= 0 && unit <= 100)
    {
        total = (unit * 0.6) + 50;
    }
    else if (unit >= 100 && unit <= 300)
    {
        total = 60 + (unit - 100) * 0.8 + 50;
    }
    else if (unit >= 300)
    {
        total = 60 + 160 + (unit - 300) * 0.9 + 50;
    }

    if (total >= 300)
    {
        total = total + total * 0.15;
        std::cout << "total is: " << total;
    }
    else
    {
        std::cout << "total is: " << total;
    }

    return 0;
}
