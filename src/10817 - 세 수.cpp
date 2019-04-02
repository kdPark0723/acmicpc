#include <iostream>
#include <algorithm>
#include <array>

using namespace std;

int main() {
    array<int, 3> input {};

    for(size_t i = 0; i < 3; i++)
        cin >> input[i];

    sort(input.begin(), input.end());

    cout << input[1] << endl;

    return 0;
}