#include <iostream>
#include <cstring>

bool findSubStr(const char *text, const char *word) {
    int counter = 0;
    for (int i = 0; i < strlen(text); i++) {
        for (int j = 0; j < strlen(word); j++) {
            if (*(text + i + j) == *(word + j)) {
                counter++;
            }
            if (strlen(word) == counter) {
                return true;
            }
            if (*(text + i + j) != *(word + j)) {
                counter = 0;
                break;
            }
        }
    }

    return false;
}

int main() {
    const char *text = "Hello world!";
    const char *word = "banana";
    const char *word2 = "Hello";
    const char *word3 = "lo";


    std::cout << findSubStr(text, word) << std::endl;
    std::cout << findSubStr(text, word2) << std::endl;
    std::cout << findSubStr(text, word3) << std::endl;

    return 0;
}
