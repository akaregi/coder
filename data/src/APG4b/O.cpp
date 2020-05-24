#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    int A, B, C;
    std::cin >> A >> B >> C;

    std::vector<int> list = {A, B, C};

    int max = *std::max_element(list.begin(), list.end());
    int min = *std::min_element(list.begin(), list.end());

    std::cout << max - min << std::endl;

    return 0;
}
