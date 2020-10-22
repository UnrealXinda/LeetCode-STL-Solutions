// Problem link: https://leetcode.com/problems/majority-element/

/*
Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.
You may assume that the array is non-empty and the majority element always exist in the array.
*/

/*
Runtime: 44 ms, faster than 68.23% of C++ online submissions for Majority Element.
Memory Usage: 19.9 MB, less than 99.97% of C++ online submissions for Majority Element.
*/

class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        auto counts = std::unordered_map<int, int>();
        
        std::for_each(std::begin(nums),
                      std::end(nums),
                      [&](int num) { ++counts[num]; });
        
        const auto it = std::max_element(std::begin(counts),
                                         std::end(counts),
                                         [](const auto& a, const auto& b) { return a.second < b.second; });
        
        return it->first;
    }
};
