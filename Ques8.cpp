#include <iostream>
#include <vector>

std::vector<int> shuffleArray(const std::vector<int>& nums, int n) {
    std::vector<int> shuffled;
    shuffled.reserve(nums.size());

    for (int i = 0; i < n; i++) {
        shuffled.push_back(nums[i]);
        shuffled.push_back(nums[i + n]);
    }

    return shuffled;
}

int main() {
    //std::vector<int> nums = { 2, 5, 1, 3, 4, 7 };
    int n ;

    std::vector<int> nums;
    int num;
    while (std::cin >> num) {
        nums.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    std::cin>>n;

    std::vector<int> shuffled = shuffleArray(nums, n);

    //std::cout << "Shuffled array: ";
    for (int num : shuffled) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

