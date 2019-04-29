#include <iostream>
#include <vector>
#include <queue>

struct Position {
    int x, y;
};

class BabyShark {
public:
    Position position;

    BabyShark(const Position &position)
        : position{position}, size{2}, eatFishNum{0} {}
    
    bool eat(int size) {
        if (size < this->size) {
            eatFishNum++;
            if (eatFishNum == size) {
                size++
                eatFishNum = 0;
            }
            return true;
        }
        return false;
    }
    bool canGo(const Position &position, int size) {
        if (position.x + this->position.x < 0 || position.y + this->position.y < 0)
            return false;
        if (size <= this->size)
            return true;
    
        return false;
    }
private:
    int size;
    int eatFishNum;
};

struct Map {
    std::vector<std::vector<int>> data;
    int time;

    Map(int N)
        : data{N, std::vector<int>{N, 0}}, time{}, willMove{}
        , canGo{{-1, 0}, {0, -1}, {1, 0}, {0, 1}} {}
    
    Position getBabySharkPostion() {
        for (int i = 0; i < data.size(); ++i)
            for (int j = 0; j < data[i].size(); ++j)
                if (data[i][j] == 9) {
                    data[i][j] = 0;
                    return Position{i, j};
                }
    }

    int eatAllFishAndGetTotalTime(BabyShark &babyshark) {
        willMove.push(babyshark.position);

        while (!willMove.empty()){
            babyshark.position = willMove.front();

            willMove.pop();
            visted[babyshark.position.x][babyshark.position.y] = true;
            babyshark.eat(data)

            for (int i = 0; i < 4; i++) {
                if (babyshark.canGo(canGo[i])) {
                    willMove.push({babyshark.position.x + canGo[i].x, babyshark.position.y + canGo[i].y});
                }
            }
            
        }
        
    } 
private:
    std::queue<Position> willMove;
    std::vector<std::vector<bool>> visted;

    Position canGo[4];
};

int main() {
    int N;
    std::cin >> N;

    Map map{N};
    BabyShark babyShark{map.getBabySharkPostion()};

    return 0;
}