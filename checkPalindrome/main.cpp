#include <iostream>
#include <cstring>

using namespace std;

bool checkPalindrome(std::string inputString) {
    int len = inputString.length();
    for (int i = 0; i <= len; i++) {
        if (inputString[i] != inputString[len-i-1]) {
            return false;
        }
    }
    return true;
}

int main () {
    cout << checkPalindrome("AABCD") << endl;
    cout << checkPalindrome("abaaba") << endl;
    cout << checkPalindrome("aajaa") << endl;
}