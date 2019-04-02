#include <iostream>
#include <string>

void printCharRepeat(char ch, int times);

int main() {
    int T;
    std::cin >> T;

    for (int i = 0; i < T; ++i) {
        int R;
        std::cin >> R;
        std::string S;
        std::cin >> S;
        
        for (int j = 0; j < S.length(); ++j)
            printCharRepeat(S[j], R);
        std::cout << std::endl;
    }

    return 0;
}

void printCharRepeat(char ch, int times) {
    for (int i = 0; i < times; ++i)
        std::cout << ch;
}
