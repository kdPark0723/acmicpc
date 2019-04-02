#include <iostream>
#include <algorithm>
#include <string>
#include <array>

int main() {
    int n;
    std::cin >> n;

    int num_of_group_word {0};
    std::array<bool, 'z' - 'a' + 1> is_before {};
    for (int i = 0; i < n; ++i) {
        std::fill(is_before.begin(), is_before.end(), false);
        
        std::string word {};
        std::cin >> word;

        signed char before_ch = -1;
        int j;
        for (j = 0; j < word.length(); ++j) {
            if (word[j] != before_ch)
                if (is_before[word[j] - 'a'])
                    break;
                else
                    is_before[word[j] - 'a'] = true;
            before_ch = word[j];
        }
        
        if (j == word.length())
            num_of_group_word++;
    }

    std::cout << num_of_group_word << std::endl;

    return 0;
}