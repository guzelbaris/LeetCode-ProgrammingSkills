// LeetCodeProgrammingSkills.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MergeStringsAlternately.h"
using namespace std;

int main()
{
    Solution solution;
    string word1 = "ab", word2 = "pqrs";
    solution.mergeAlternately(word1, word2);
    std::cout << solution.mergeAlternately(word1, word2);
}
