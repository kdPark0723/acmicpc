#include <iostream>
#include <string>

bool isVPS(std::string& str);

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; i++) {
        std::string str;
        std::cin >> str;

        bool is_VPS = isVPS(str);
        if (is_VPS)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}

bool isVPS(std::string& str) {
    int count {0};

    int length = str.length();
    for (int i = 0; i < length; ++i) {
        if (str[i] == '(')
            count++;
        else {
            count--;
            if (count < 0)
                return false;
        }
    }

    if (count != 0)
        return false;
    return true;
}
