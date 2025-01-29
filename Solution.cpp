
#include <string>
#include "Solution.h"
using namespace std;

    bool Solution::isPalindrome(int number) {
        auto strNumber = to_string(number);
        for (int i = 0, j = static_cast<int>(strNumber.length()) - 1; i < j; i++, j--) {
            if (strNumber[i] != strNumber[j])
                return false;
        }
        return true;
    };
