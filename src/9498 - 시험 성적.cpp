#include <iostream>

using namespace std;

char getGrade(int score);

int main() {
    int score;
    cin >> score;

    cout << getGrade(score);

    return 0;
}

char getGrade(int score) {
    static char grade[] = {
        'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'
    };
    return grade[score/10];
}