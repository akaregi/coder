#include <cmath>
#include <iostream>

int main()
{
    int x, A, B;
    std::cin >> x >> A >> B;
    x++;

    std::cout << x << std::endl;
    std::cout << x * (A + B) << std::endl;
    std::cout << static_cast<long>(std::pow(x * (A + B), 2)) << std::endl;
    std::cout << static_cast<long>(std::pow(x * (A + B), 2) - 1) << std::endl;

    return 0;
}
