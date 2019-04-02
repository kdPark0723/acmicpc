#include <iostream>
#include <array>
#include <numeric>
#include <algorithm>
#include <limits>

constexpr int INPUT_MAX = 1000000;
constexpr int TYPE_MAX = 3;

using Edges = std::array<std::array<int, 2>, 12>;
using Corners = std::array<std::array<int, 3>, 8>;
using Face = std::array<int, 6>;

struct DiceData
{
    Edges edges;
    Corners corners;
    Face face_data;
};


class Dice {
public:
    Dice(const DiceData& data, int size) : data { data }, size { size } { }

    int getMinSumOfEdges() {
        return getMinSum(data.edges);
    }
    int getMinSumOfCorners() {
        return getMinSum(data.corners);
    }
    int getMinOfFaces() {
        int min = std::numeric_limits<int>::infinity();
        for (auto element : data.face_data)
            min = std::min(min, element);
        
        return min;
    }
    int getMinSumOfDice() {
        int min_of_edges = getMinSumOfEdges();
        int min_of_corner = getMinSumOfCorners();
        int min_of_face = getMinOfFaces();

        int num_of_edges = 12 * (size-2);
        int num_of_corner = 8;
        int num_of_face = 6 * (size-2) * (size-2);

        return min_of_edges * num_of_edges
            + min_of_corner * num_of_corner
            + min_of_face * num_of_face;
    }
private:
    const int size;
    const DiceData& data;

    template <std::size_t SIZE>
    int sum(const std::array<int, SIZE>& array) {
        int sum { 0 };
        for (auto i : array)
            sum += data.face_data[i];
        
        return sum;
    }

    template <std::size_t SIZE, typename T>
    int getMinSum(const std::array<T, SIZE>& array) {
        int min = std::numeric_limits<int>::infinity();
        for (auto element : array)
            min = std::min(min, sum(element));

        return min;
    }
};

void solve();
void test();

void getInputDataInConsole();

int main() {
    return 1;
}

void solve() {
    DiceData data = {
        {
            {1, 2},
            {1, 3},
            {1, 4},
            {1, 5},
            {2, 3},
            {2, 4},
            {2, 6},
            {3, 4},
            {3, 5},
            {4, 5},
            {4, 6},
            {5, 6}  
        },
    };
}

void test() {

}