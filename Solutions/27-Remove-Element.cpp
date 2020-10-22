// Problem link: https://leetcode.com/problems/remove-element/

/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.
Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
The order of elements can be changed. It doesn't matter what you leave beyond the new length.
*/

/*
Runtime: 4 ms, faster than 64.93% of C++ online submissions for Remove Element.
Memory Usage: 9.2 MB, less than 100.00% of C++ online submissions for Remove Element.
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val)
    {
        return std::distance(
            std::begin(nums),
            std::remove(std::begin(nums), std::end(nums), val));
    }
};
