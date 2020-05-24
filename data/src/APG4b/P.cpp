#include <iostream>
#include <numeric>
#include <vector>

int member(int N);

int main()
{
    int N;
    std::cin >> N;

    std::cout << member(N) * member(N) * member(N) << std::endl;

    return 0;
}

inline int member(int N)
{
    std::vector<int> vector;

    for (auto i = 0; i < N; i++)
    {
        int score;
        std::cin >> score;
        vector.push_back(score);
    }

    return std::accumulate(vector.begin(), vector.end(), 0);
}
