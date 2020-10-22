// Problem link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

/*
Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
*/

/*
Runtime: 12 ms, faster than 60.81% of C++ online submissions for Maximum Product of Two Elements in an Array.
Memory Usage: 10.2 MB, less than 100.00% of C++ online submissions for Maximum Product of Two Elements in an Array.
*/

class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        std::sort(std::begin(nums), std::end(nums), std::greater<int>());
        return (nums[0] - 1) * (nums[1] - 1);
    }
};
