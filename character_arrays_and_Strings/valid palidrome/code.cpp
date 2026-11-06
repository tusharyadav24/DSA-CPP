#include <iostream>
#include <cstring>
using namespace std;

bool isValidPalindrome(char str[], int n) {
    int start = 0, end = n - 1; 
    while (start < end) {
        if (str[start] != str[end]) {
            return false; 
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[] = "racecar";
    
    if (isValidPalindrome(str, strlen(str))) {
        cout << "String is a palindrome" << endl;
    } else {
        cout << "String is not a palindrome" << endl;
    }
    
    return 0;
}