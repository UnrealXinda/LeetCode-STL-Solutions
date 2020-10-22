// Problem link: https://leetcode.com/problems/check-if-n-and-its-double-exist/

/*
Given an array arr of integers, check if there exists two integers N and M such that N is the double of M ( i.e. N = 2 * M).
More formally check if there exists two indices i and j such that :
i != j
0 <= i, j < arr.length
arr[i] == 2 * arr[j]
*/

/*
Runtime: 12 ms, faster than 79.54% of C++ online submissions for Check If N and Its Double Exist.
Memory Usage: 11.6 MB, less than 13.53% of C++ online submissions for Check If N and Its Double Exist.
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k)
    {
        auto set = std::unordered_set<int>{arr.begin(), arr.end()};        
        auto hasDouble = std::any_of(arr.begin(), arr.end(), [&constSet = std::as_const(set)](int i){ return i != 0 && constSet.find(i * 2) != constSet.end(); });
        auto hasEnoughZeros = std::count(arr.begin(), arr.end(), 0) > 1;
        
        return hasDouble || hasEnoughZeros;
    }
};
