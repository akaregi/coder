#include <iostream>

int main()
{
    int A, B;
    std::string op;

    std::cin >> A >> op >> B;

    if (op == "+")
    {
        std::cout << A + B << "\n";
        return 0;
    }

    if (op == "*")
    {
        std::cout << A * B << "\n";
        return 0;
    }

    if (op == "-")
    {
        std::cout << A - B << "\n";
        return 0;
    }

    if (op == "/" && B > 0)
    {

        std::cout << A / B << "\n";
        return 0;
    }

    std::cout << "error\n";

    return 0;
}
