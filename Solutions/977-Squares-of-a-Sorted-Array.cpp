// Problem link: https://leetcode.com/problems/squares-of-a-sorted-array/

/*
Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.
*/

/*
Runtime: 112 ms, faster than 47.03% of C++ online submissions for Squares of a Sorted Array.
Memory Usage: 26.1 MB, less than 36.43% of C++ online submissions for Squares of a Sorted Array.
*/

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A)
    {
        auto result = A;
        std::for_each(std::begin(result), std::end(result), [](int& i){ i *= i; });
        std::sort(std::begin(result), std::end(result), std::less<int>());
        
        return result;
    }
};
