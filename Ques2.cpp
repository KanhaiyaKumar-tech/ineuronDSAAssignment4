#include <iostream>
#include <vector>
#include <unordered_set>

std::vector<std::vector<int>> findDistinctIntegers(const std::vector<int>& nums1, const std::vector<int>& nums2) {
    std::unordered_set<int> set1(nums1.begin(), nums1.end());
    std::unordered_set<int> set2(nums2.begin(), nums2.end());

    std::vector<int> answer1, answer2;

    for (int num : nums1) {
        if (set2.find(num) == set2.end()) {
            answer1.push_back(num);
        }
    }

    for (int num : nums2) {
        if (set1.find(num) == set1.end()) {
            answer2.push_back(num);
        }
    }

    return { answer1, answer2 };
}

int main() {
    //std::vector<int> nums1 = { 1, 2, 3 };
    std::vector<int> nums1;
    int num;
    while (std::cin >> num) {
        nums1.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }
    //std::vector<int> nums2 = { 2, 4, 6 };
    std::vector<int> nums2;
    //int num;
    while (std::cin >> num) {
        nums2.push_back(num);
        if (std::cin.peek() == '\n') {
            break;
        }
    }

    std::vector<std::vector<int>> answer = findDistinctIntegers(nums1, nums2);

    //std::cout << "Distinct integers in nums1 not present in nums2: ";
    for (int num : answer[0]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    //std::cout << "Distinct integers in nums2 not present in nums1: ";
    for (int num : answer[1]) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

