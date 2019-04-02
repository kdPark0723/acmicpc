#include <iostream>

using namespace std;

int main(void)
{
    string str {0};
    
    cin >> str;

    for (auto i = 0; i <= str.size()/10; ++i)
        cout << str.substr(i * 10, 10) << endl;

    return 0;
}