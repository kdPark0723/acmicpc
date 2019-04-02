#include <iostream>

int main() {
    int N;
    std::cin >> N;

    int sum {};
    char tmp;
    for (size_t i = 0; i < N; i++) {
        std::cin >> tmp;
        sum += tmp - '0';
    }

    std::cout << sum;
     
    return 0;
}