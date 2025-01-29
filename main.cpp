#include <iostream>
#include <string>
#include "Solution.h"
using namespace std;

int main() {
    int x = 122;
    bool pal = Solution::isPalindrome(x);
    string  str = (pal) ? "is a palindrome" : "is not a palindrome";
    cout << x<< " " << str << "\n";
    return 0;
}
