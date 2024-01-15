#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_LENGTH = 100;

    char firstString[MAX_LENGTH];
    char secondString[MAX_LENGTH];

    cout << "Enter the first string: ";
    cin.getline(firstString, MAX_LENGTH);

    cout << "Enter the second string: ";
    cin.getline(secondString, MAX_LENGTH);

    int len1 = strlen(firstString);
    int len2 = strlen(secondString);

    char* concatenatedString = new char[len1 + len2 + 1];

    strcpy(concatenatedString, firstString);

    char* endPtr = concatenatedString + len1;

    strcpy(endPtr, secondString);

    cout << "Concatenated string: " << concatenatedString << std::endl;

    delete[] concatenatedString;

    return 0;
}
