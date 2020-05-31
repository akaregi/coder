#include <iostream>
#include <vector>

int main()
{
    int N, M;
    std::cin >> N >> M;

    std::vector<std::vector<char>> table(N, std::vector<char>(N, '-'));

    for (size_t i = 0; i < M; i++)
    {
        int rA, rB;
        std::cin >> rA >> rB;

        table.at(rA - 1).at(rB - 1) = 'o';
        table.at(rB - 1).at(rA - 1) = 'x';
    }

    for (auto row : table)
    {
        for (auto i = 0; i < N; i++)
        {
            std::cout << row.at(i);

            if (i + 1 == N)
            {
                std::cout << "\n";
                continue;
            }

            std::cout << ' ';
        }
    }

}
