#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    int N;
    std::cin >> N;

    std::vector<int> scores;

    for (int i = 0; i < N; i++)
    {
        int score;
        std::cin >> score;
        scores.push_back(score);
    }

    int sum = std::accumulate(scores.begin(), scores.end(), 0);
    int avg = sum / N;

    for (int score: scores)
    {
        std::cout << std::abs(score - avg) << std::endl;
    }

    return 0;
}
