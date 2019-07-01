#include <iostream>
#include <algorithm>
#include <string>
#include "question3/Solution.h"

using namespace std;
using namespace question3;


int main(){
    string s = "abcabcbb";
    cout<< Solution().lengthOfLongestSubstring(s)<<endl;
}