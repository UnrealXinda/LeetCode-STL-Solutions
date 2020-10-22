// Problem link: https://leetcode.com/problems/search-insert-position/

/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
*/

/*
Runtime: 8 ms, faster than 82.71% of C++ online submissions for Search Insert Position.
Memory Usage: 9.9 MB, less than 99.99% of C++ online submissions for Search Insert Position.
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target)
    {
        return std::distance(std::begin(nums),
                             std::lower_bound(std::begin(nums), std::end(nums), target));
    }
};
