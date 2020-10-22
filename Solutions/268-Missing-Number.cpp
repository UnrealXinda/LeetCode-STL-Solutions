// Problem link: https://leetcode.com/problems/missing-number/

/*
Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Follow up: Could you implement a solution using only O(1) extra space complexity and O(n) runtime complexity?
*/

/*
Runtime: 32 ms, faster than 93.78% of C++ online submissions for Missing Number.
Memory Usage: 18.2 MB, less than 5.07% of C++ online submissions for Missing Number.
*/

class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        auto n = nums.size();
        auto sum = n * (n + 1) / 2;
        auto partialSum = std::accumulate(std::begin(nums), std::end(nums), 0);
        
        return sum - partialSum;
    }
};
