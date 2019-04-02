#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string str {""};
    cin >> n;
    
    for (auto i = n - 1; i >= 0; --i)
    {
        for (auto j = n - 1; j > i; --j)
            str += " ";
        for (auto j = 0; j <= i; ++j)
            str += "*";
        str += "\n";
    }

    cout << str;

    return 0;
}