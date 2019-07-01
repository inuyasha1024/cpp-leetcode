//
// Created by James Zhang - Vendor on 2019-06-27.
//

#include "Solution.h"
using namespace question3;

int Solution::lengthOfLongestSubstring(string str) {
    int l = 0;
    int i = 0;
    int maxLength = 0;
    char usedChar[256] = {0};

    while (l<str.size()){
        if(i < str.size() && usedChar[str[i]] ==0){
            usedChar[str[i++]] += 1;
        } else{
            usedChar[str[l++]] -= 1;
        }

        maxLength = max(maxLength,i-l);
    }

    return maxLength;
}