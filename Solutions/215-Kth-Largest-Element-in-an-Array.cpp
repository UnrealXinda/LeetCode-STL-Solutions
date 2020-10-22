// Problem link: https://leetcode.com/problems/kth-largest-element-in-an-array/

/*
Find the kth largest element in an unsorted array. Note that it is the kth largest element in the sorted order, not the kth distinct element.
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
