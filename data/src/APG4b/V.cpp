#include <iostream>
#include <vector>

int count_report_num(std::vector<std::vector<int>> &parent, int id);

int main()
{
    int N;
    std::cin >> N;

    // s: sub := 属する親会社の ID
    std::vector<int> sub(N);

    // 0: sub := 社長
    // 社長が属する親会社はない（トップレベル）
    sub.at(0) = -1;

    for (auto i = 1; i < N; i++) // i := 会社の ID
    {
        std::cin >> sub.at(i);
    }

    std::vector<std::vector<int>> parent(N);

    for (auto i = 1; i < N; i++)
    {
        parent.at(sub.at(i)).push_back(i);
    }

    for (int i = 0; i < N; i++)
    {
        std::cout << count_report_num(parent, i) << std::endl;
    }

    return 0;
}

int count_report_num(std::vector<std::vector<int>> &parent, int id)
{
    if (parent.at(id).size() == 0)
    {
        return 1;
    }

    int papers = 1;

    for (auto sub: parent.at(id))
    {
        papers += count_report_num(parent, sub);
    }

    return papers;
}
