#include <iostream>

int main()
{
    int N, A;
    std::cin >> N >> A;

    for (int i = 1; i < N + 1; i++)
    {
        std::string op;
        int B;
        std::cin >> op >> B;

        if (op == "+")
        {
            A = A + B;
        }

        if (op == "-")
        {
            A = A - B;
        }

        if (op == "*")
        {
            A = A * B;
        }

        if (op == "/")
        {
            if (B <= 0)
            {
                std::cout << "error" << std::endl;
                return 0;
            }
            A = A / B;
        }

        std::cout << i << ":" << A << std::endl;
    }

    return 0;
}
