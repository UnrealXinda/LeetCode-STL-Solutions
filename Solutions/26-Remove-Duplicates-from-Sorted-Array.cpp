// Problem link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

/*
Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/

/*
Runtime: 16 ms, faster than 87.26% of C++ online submissions for Remove Duplicates from Sorted Array.
Memory Usage: 13.9 MB, less than 99.99% of C++ online submissions for Remove Duplicates from Sorted Array.
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums)
    {
        return std::distance(
            std::begin(nums),
            std::unique(std::begin(nums), std::end(nums)));
    }
};
