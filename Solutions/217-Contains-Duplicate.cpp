// Problem link: https://leetcode.com/problems/contains-duplicate/

/*
Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        auto temp = vector<int>(nums.size());
        std::copy(std::begin(nums), std::end(nums), std::begin(temp));
        std::sort(std::begin(temp), std::end(temp));
        return std::distance(std::end(temp), 
                             std::unique(std::begin(temp), std::end(temp))) != 0;
    }
};
