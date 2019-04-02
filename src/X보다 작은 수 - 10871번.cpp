#include <iostream>

int main() {
    int N, X;
    std::cin >> N >> X;

    int tmp_num;
    for (int i = 0; i < N; ++i) {
        std::cin >> tmp_num;
        if (tmp_num < X)
            std::cout << tmp_num << " ";
    }
}