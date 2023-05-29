#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> sortedSquares(const std::vector<int>& nums) {
    std::vector<int> squares(nums.size());

    int left = 0;
    int right = nums.size() - 1;
    int index = nums.size() - 1;

    while (left <= right) {
        int squareLeft = nums[left] * nums[left];
        int squareRight = nums[right] * nums[right];

        if (squareLeft > squareRight) {
            squares[index] = squareLeft;
            left++;
        } else {
            squares[index] = squareRight;
            right--;
        }

        index--;
    }

    return squares;
}

int main() {
    std::vector<int> nums = { -4, -1, 0, 3, 10 };

    std::vector<int> squares = sortedSquares(nums);

    std::cout << "Sorted squares: ";
    for (int num : squares) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

