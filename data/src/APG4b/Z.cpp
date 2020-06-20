#include <algorithm>
#include <iostream>
#include <tuple>
#include <utility>
#include <vector>

int main()
{
    int N;
    std::cin >> N;

    using record = std::pair<int, int>;

    std::vector<record> records;

    for (auto i = 0; i < N; i++)
    {
        int a, b;
        std::cin >> a >> b;

        records.push_back(std::make_pair(a, b));
    }

    std::sort(records.begin(), records.end(), [](const record& x, const record& y) {
        return x.second < y.second;
    });

    for (auto rec : records)
    {
        std::cout << rec.first << " " << rec.second << std::endl;
    }

    return 0;
}
