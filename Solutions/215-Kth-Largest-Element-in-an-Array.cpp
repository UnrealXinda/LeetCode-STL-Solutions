// Problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/

/*
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.
*/

/*
Runtime: 16 ms, faster than 89.02% of C++ online submissions for Kth Largest Element in an Array.
Memory Usage: 10.6 MB, less than 14.41% of C++ online submissions for Kth Largest Element in an Array.
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        auto temp = vector<int>(nums.size());
        std::copy(std::begin(nums), std::end(nums), std::begin(temp));
        std::sort(std::begin(temp), std::end(temp), std::greater<int>());
        return temp[k - 1];
    }
};
