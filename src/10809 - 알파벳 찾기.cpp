#include <iostream>
#include <string>
#include <array>

int main() {
    constexpr int LENGTH = 'z' - 'a' + 1;

    std::array<int, LENGTH> position {};
    for (auto& element : position)
        element = -1;

    std::string str {};
    std::cin >> str;

    for (int i = 0; i < str.length(); ++i)
        if (position[str[i] - 'a'] == -1)
            position[str[i] - 'a'] = i;

    for (int i = 0; i < position.size(); ++i)
        std::cout << position[i] << " ";
    std::cout << std::endl;

    return 0;
}