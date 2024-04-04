#include <iostream>
#include <string>
#include <algorithm>

int binary_search(const std::string& str, char target) {
    int left = 0;
    int right = str.length() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (str[mid] == target) {
            return mid;
        }

        if (str[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::string str;
    char target;

    std::cout << "Enter a string: ";
    std::cin >> str;

    std::cout << "Enter a character to search for: ";
    std::cin >> target;

    int result = binary_search(str, target);

    if (result!= -1) {
        std::cout << "Character found at index " << result << std::endl;
    } else {
        std::cout << "Character not found in string" << std::endl;
    }

    return 0;
}