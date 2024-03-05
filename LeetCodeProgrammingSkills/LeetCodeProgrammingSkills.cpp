// LeetCodeProgrammingSkills.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AllSolutions.h"
using namespace std;

int main()
{
    Solution solution;
    vector<int> nums{9,9,9};
    vector<int> result = solution.plusOne(nums);
    for (int i = 0; i < result.size(); i++) {
        cout << nums.at(i)<<" ";
    }
    
}
