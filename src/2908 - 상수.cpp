#include <iostream>
#include <algorithm>

int reverseInt(int num);

int main() {
    int a, b;
    std::cin >> a >> b;

    a = reverseInt(a);
    b = reverseInt(b);

    int max = std::max(a, b);

    std::cout << max << std::endl;

    return 0;
}

int reverseInt(int num) {
    int res {0};

    do {
        res *= 10;
        res += num % 10;
    } while (num /= 10);
    
    return res;
}
