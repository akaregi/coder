#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

int main()
{
    int N;
    std::cin >> N;
    std::vector<int> A(N);

    for (int i = 0; i < N; i++)
    {
        std::cin >> A[i];
    }

    std::map<int, int> count;

    for (int x : A)
    {
        if (count.count(x))
        {
            count.at(x)++;
        }
        else
        {
            count[x] = 1;
        }
    }

    int max_count = 0;
    int answer = -1;
    for (int x : A)
    {
        if (max_count < count.at(x))
        {
            max_count = count.at(x);
            answer = x;
        }
    }

    std::cout << answer << " " << max_count << std::endl;
}
