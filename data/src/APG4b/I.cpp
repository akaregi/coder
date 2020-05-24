#include <iostream>

void pattern1();
void pattern2();

int main()
{
    int pattern;
    std::cin >> pattern;

    switch (pattern)
    {
    case 1:
        pattern1();
        break;

    case 2:
        pattern2();
        break;

    default:
        break;
    }

    return 0;
}

// if pattern == 1
void pattern1() {
    int price;
    int N;
    std::cin >> price >> N;

    std::cout << price * N << "\n";
}

// if pattern == 2
void pattern2() {
    std::string text;
    int price;
    int N;
    std::cin >> text >> price >> N;

    std::cout << text << "!\n";
    std::cout << price * N << "\n";
}
