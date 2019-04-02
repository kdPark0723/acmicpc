#include <iostream>

using namespace std;

int main(void)
{
    int n;
    string str {""};
    cin >> n;
    
    for (int i = n; i > 0; --i)
    {
        str += to_string(i);
        str += '\n';
    }

    cout << str;

    return 0;
}
