#include <iostream>

using namespace std;

int main(void)
{
    int x, y, total {-1};
    string weeks[] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
    int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    
    cin >> x >> y;

    for (int i = 1; i < x; ++i)
        total += days[i - 1];
    total += y;

    cout << weeks[(total + 1) % 7];

    return 0;
}