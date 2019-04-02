#include <iostream>

using namespace std;

int main(void)
{
    int n, res;
    
    cin >> n;
    res = n;
    // n = 5*a + 3*b
    // res = min(a + b)

    for (auto i = 0; i <= n/5; ++i)
    {
        if ((n - 5*i) % 3 != 0)
            continue;
        res = res < i + (n - 5*i)/3 ? res : i + (n - 5*i)/3;
    }

    if (res == n)
        res = -1;

    cout << res << endl;

    return 0;
}
