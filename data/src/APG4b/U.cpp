#include <iostream>
#include <vector>

void validate(std::vector<std::vector<int>> &vec, int &correct, int &wrong);

int main()
{
    std::vector<std::vector<int>> A(9, std::vector<int>(9));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cin >> A.at(i).at(j);
        }
    }

    auto correct = 0, wrong = 0;

    validate(A, correct, wrong);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            std::cout << A.at(i).at(j);
            if (j < 8) {
                std::cout << " ";
                continue;
            }
            std::cout << std::endl;
        }
    }

    std::cout << correct << std::endl;
    std::cout << wrong << std::endl;

    return 0;
}

void validate(std::vector<std::vector<int>> &vec, int &correct, int &wrong) {
    auto i = 1;
    for (auto &row : vec)
    {
        auto j = 1;
        for (auto &col : row)
        {
            int now = i * j;
            if (col != now)
            {
                col = now;
                wrong++;
            } else {
                correct++;
            }

            j++;
        }

        i++;
    }

}
