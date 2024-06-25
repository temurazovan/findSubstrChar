#include <iostream>
#include <cstring>

bool findSubStr(const char* text, const char* word) {
    for (int i = 0; i < strlen(text); i++) {
        for (int j = 0; j < i; j++) {
            if (*(text + i) == *(word + j)) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    const char* text = "Hello world!";
    const char* word = "wor";
    const char* word2 = "el";

    std::cout << findSubStr(text, word) << std::endl;
    std::cout << findSubStr(text, word2) << std::endl;

    return 0;
}
