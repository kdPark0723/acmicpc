#include <iostream>

constexpr int INPUT_SIZE = 3;

int main() {
    constexpr char yut[] = {
        'D',
        'C',
        'B',
        'A',
        'E'
    };

    int tmp_num;
    int tmp_sum;
    for (int i = 0; i < INPUT_SIZE; ++i) {
        tmp_sum = 0;
        for (int j = 0; j < 4; ++j) {
            std::cin >> tmp_num;
            tmp_sum += tmp_num;
        }
        std::cout << yut[tmp_sum] << std::endl;
    }

    return 0;
}