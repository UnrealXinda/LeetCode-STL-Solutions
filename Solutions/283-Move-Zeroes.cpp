// Problem link: https://leetcode.com/problems/move-zeroes/

/*
Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.
*/

/*
Runtime: 8 ms, faster than 83.28% of C++ online submissions for Move Zeroes.
Memory Usage: 9.5 MB, less than 100.00% of C++ online submissions for Move Zeroes.
*/

class Solution {
public:
    int moveZeroes(vector<int>& nums, int k)
    {
        std::stable_partition(nums.begin(), nums.end(), [](int n){ return n != 0; });
    }
};
