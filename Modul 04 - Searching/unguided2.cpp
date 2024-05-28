#include <iostream>
#include <string>

int main() {
    std::string str;
    int count = 0;

    std::cout << "Enter a string: ";
    std::cin >> str;

    for (char c : str) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }

    std::cout << "Number of vowels: " << count << std::endl;

    return 0;
}