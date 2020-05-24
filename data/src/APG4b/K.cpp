#include <iostream>
#include <string>

int main()
{
    unsigned int A, B;
    std::cin >> A >> B;

    std::cout << "A:" << std::string(A, ']') << std::endl;
    std::cout << "B:" << std::string(B, ']') << std::endl;

    return 0;
}
