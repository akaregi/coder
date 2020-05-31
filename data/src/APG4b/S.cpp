#include <iostream>
#include <vector>

int main()
{
    std::vector<int>::size_type N, S;
    std::cin >> N >> S;

    std::vector<int> A(N), P(N);

    for (std::vector<int>::size_type i = 0; i < N; i++)
    {
        std::cin >> A.at(i);
    }

    for (std::vector<int>::size_type i = 0; i < N; i++)
    {
        std::cin >> P.at(i);
    }

    std::vector<int>::size_type matched = 0;

    for (auto i : A)
    {
        for (auto j : P)
        {
            if (static_cast<std::vector<int>::size_type>(i + j) == S)
            {
                matched++;
            }

        }

    }

    std::cout << matched << std::endl;

    return 0;
}
