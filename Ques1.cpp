
#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> findCommonElements(const std::vector<int>& arr1, const std::vector<int>& arr2, const std::vector<int>& arr3) {
    std::vector<int> result;
    int ptr1 = 0, ptr2 = 0, ptr3 = 0;

    while (ptr1 < arr1.size() && ptr2 < arr2.size() && ptr3 < arr3.size()) {
        if (arr1[ptr1] == arr2[ptr2] && arr2[ptr2] == arr3[ptr3]) {
            result.push_back(arr1[ptr1]);
            ptr1++;
            ptr2++;
            ptr3++;
        }
        else if (arr1[ptr1] < arr2[ptr2]) {
            ptr1++;
        }
        else if (arr2[ptr2] < arr3[ptr3]) {
            ptr2++;
        }
        else {
            ptr3++;
        }
    }

    return result;
}

int main() {
    std::vector<int> arr1 = { 1, 2, 3, 4, 5 };
    std::vector<int> arr2 = { 1, 2, 5, 7, 9 };
    std::vector<int> arr3 = { 1, 3, 4, 5, 8 };

    std::vector<int> commonElements = findCommonElements(arr1, arr2, arr3);

    std::cout << "Common elements: ";
    for (int num : commonElements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
