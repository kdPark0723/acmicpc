#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str {};

    for (auto i = 0; i < 100; ++i)
    {
        std::getline(std::cin, str);
        std::cout << str << std::endl;
    }

    return 0;
}
