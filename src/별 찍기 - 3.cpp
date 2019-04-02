#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string str {""};
    cin >> n;
    
    for (auto i = 0; i < n; ++i)
    {
        for (auto j = n; j > i; --j)
            str += "*";
        str += "\n";
    }

    cout << str;

    return 0;
}