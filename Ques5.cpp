#include <iostream>

int arrangeCoins(int n) {
    int row = 1;
    int count = 0;

    while (n >= row) {
        count++;
        n -= row;
        row++;
    }

    return count - 1;
}

int main() {
    int n = 5;
    int completeRows = arrangeCoins(n);

    std::cout << "Number of complete rows: " << completeRows << std::endl;

    return 0;
}

