#include <algorithm>
#include <iostream>

int main()
{
    std::string S;
    std::cin >> S;

    int plus = static_cast<int>(std::count(S.cbegin(), S.cend(), '+'));
    int minus = static_cast<int>(std::count(S.cbegin(), S.cend(), '-'));

    int diff = plus - minus;

    std::cout << 1 + diff << std::endl;

    return 0;
}
