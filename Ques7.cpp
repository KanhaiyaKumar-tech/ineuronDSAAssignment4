#include <iostream>
#include <vector>
#include <algorithm>

int maxCount(int m, int n, const std::vector<std::vector<int>>& ops) {
    int minRow = m;
    int minCol = n;

    for (const auto& op : ops) {
        minRow = std::min(minRow, op[0]);
        minCol = std::min(minCol, op[1]);
    }

    return minRow * minCol;
}

int main() {
    int m = 3;
    int n = 3;
    std::vector<std::vector<int>> ops = { {2, 2}, {3, 3} };

    int maxIntegers = maxCount(m, n, ops);

    std::cout << "Number of maximum integers: " << maxIntegers << std::endl;

    return 0;
}

