// Problem link: https://leetcode.com/problems/contains-duplicate/

/*
Given an array of integers, find if the array contains any duplicates.
Your function should return true if any value appears at least twice in the array, and it should return false if every element is distinct.
*/

/*
Runtime: 52 ms, faster than 95.86% of C++ online submissions for Contains Duplicate.
Memory Usage: 15.7 MB, less than 6.56% of C++ online submissions for Contains Duplicate.
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
