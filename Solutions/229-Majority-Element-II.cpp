// Problem link: https://leetcode.com/problems/majority-element-ii/

/*
Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
Follow-up: Could you solve the problem in linear time and in O(1) space?
*/

/*
Runtime: 20 ms, faster than 98.87% of C++ online submissions for Majority Element II.
Memory Usage: 16.1 MB, less than 87.50% of C++ online submissions for Majority Element II.
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums)
    {
        auto size = nums.size();
        auto counts = std::unordered_map<int, int>();
        auto result = std::vector<int>();
        
        std::for_each(std::begin(nums),
                      std::end(nums),
                      [&](int num) { ++counts[num]; });
        
        erase_if(counts, [size](const auto& p) { return p.second <= size / 3; });
        // C++20
        //std::erase_if(counts, [size](const auto& p) { return p->second <= size / 3; });
        
        std::transform(std::begin(counts),
                       std::end(counts),
                       std::back_inserter(result),
                       [](const auto& p) -> int { return p.first; });
        
        return result;
    }
    
    template<class K, class V, class Pred>
    int erase_if(std::unordered_map<K, V>& c, Pred pred)
    {
        auto old_size = c.size();
        for (auto i = c.begin(), last = c.end(); i != last; ) {
            if (pred(*i)) {
                i = c.erase(i);
            } else {
                ++i;
            }
        }
        return old_size - c.size();
    }
};
