#include <iostream>
#include <string>
#include <unordered_map>

class TimeMap {
public:
    TimeMap(char start_ch, int start_time)
        : time_map{}, ch{start_ch}, time{start_time} {
        addTime(3);
        addTime(3);
        addTime(3);
        addTime(3);
        addTime(3);
        addTime(4);
        addTime(3);
        addTime(4);
    }

    void addTime(int size) {
        for (int i = 0; i < size; ++i)
            time_map[static_cast<char>(ch + i)] = time;
        time++;
        ch = static_cast<char>(ch + size);
    }

    int& operator[](char index) {
        return time_map[index];
    } 

private:
    std::unordered_map<char, int> time_map;
    char ch;
    int time;
};

int main() {
    TimeMap time_map {'A', 3};

    std::string phone_number;
    std::cin >> phone_number;

    int total_time {0};
    for (auto ch : phone_number)
        total_time += time_map[ch];

    std::cout << total_time << std::endl;
    
    return 0;
}
