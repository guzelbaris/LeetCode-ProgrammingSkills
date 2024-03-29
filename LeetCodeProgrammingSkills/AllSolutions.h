#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class Solution {
public:

    string mergeAlternately(string word1, string word2);
    char findTheDifference(string s, string t);
    int strStr(string haystack, string needle);
    bool isAnagram(string s, string t);
    bool repeatedSubstringPattern(string s);
    void moveZeroes(vector<int>& nums);
    vector<int> plusOne(vector<int>& digits);
    int arraySign(vector<int>& nums);
    int maxFrequencyElements(vector<int>& nums);
    bool canMakeArithmeticProgression(vector<int>& arr);
    string customSortString(string order, string s);
    bool isMonotonic(vector<int>& nums);
    int romanToInt(string s);

    int lengthOfLastWord(string s);
};
