#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str {};

    for (auto i = 0; i < 100; ++i)
    {
        getline(cin, str);
        cout << str << endl;
    }

    return 0;
}
