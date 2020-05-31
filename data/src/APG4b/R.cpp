#include <iostream>
#include <vector>

int main()
{
    std::vector<int> data(5);

    for (size_t i = 0; i < 5; i++)
    {
        std::cin >> data.at(i);
    }

    auto prev = -1;

    for (auto current : data)
    {
        if (current == prev)
        {
            std::cout << "YES" << std::endl;
            return 0;
        }

        prev = current;
    }

    std::cout << "NO" << std::endl;

    return 0;
}
