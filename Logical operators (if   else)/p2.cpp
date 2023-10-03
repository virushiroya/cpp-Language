#include<iostream>

int main()
{
    int x, y;
    std::cout << "Enter Value of X :";
    std::cin >> x;
    std::cout << "Enter value of y :";
    std::cin >> y;
    
    if (x < 2000 || x > 3000)
    {
        std::cout << "this value is : " << x << std::endl;
    }
    if (y > 100 && y < 500)
    {
        std::cout << "this value is : " << y << std::endl;
    }
    
    return 0;
}
