
#include <iostream>
#include <vector>

std::vector<std::vector<int>> transposeMatrix(const std::vector<std::vector<int>>& matrix) {
    int n = matrix.size(); // number of rows
    int m = matrix[0].size(); // number of columns

    std::vector<std::vector<int>> transpose(m, std::vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    return transpose;
}

int main() {
    //std::vector<std::vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };

    std::vector<std::vector<int>> matrix;
    int num;
    std::cout << "Enter the matrix elements row by row (separated by spaces, end each row with -1):" << std::endl;

    while (true) {
        std::vector<int> row;
        while (std::cin >> num && num != -1) {
            row.push_back(num);
        }
        if (row.empty()) {
            break;
        }
        matrix.push_back(row);
    }

    std::vector<std::vector<int>> transpose = transposeMatrix(matrix);

    std::cout << "Transpose of the matrix:" << std::endl;
    for (const auto& row : transpose) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
