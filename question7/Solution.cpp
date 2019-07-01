//
// Created by James Zhang - Vendor on 2019-06-28.
//

#include "Solution.h"

using namespace question7;

int Solution::reverseInteger(int x) {
    int res;
    while ( x != 0){
        if(abs(res) > INT_MAX){
            return 0;
        }
        res = 10*res + x%10;
        x /= 10;
    }

    return res;
}
