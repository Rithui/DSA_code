#include <iostream>
#include <string>

int main() {
    std::string inputString;
    char oldChar, newChar;
    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    std::cout << "Enter the character to replace: ";
    std::cin >> oldChar;

    std::cout << "Enter the replacement character: ";
    std::cin >> newChar;

    for (char& c : inputString) {
        if (c == oldChar) {
            c = newChar;
        }
    }

    std::cout << "Modified string: " << inputString << std::endl;

    return 0;
}

