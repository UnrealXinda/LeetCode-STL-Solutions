// Problem link: https://leetcode.com/problems/sort-array-by-parity/

/*
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
You may return any answer array that satisfies this condition.
*/

/*
Runtime: 4 ms, faster than 100.00% of C++ online submissions for Sort Array By Parity.
Memory Usage: 16.6 MB, less than 47.81% of C++ online submissions for Sort Array By Parity.
*/

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        auto result = A;
        std::partition(result.begin(), result.end(), [](int i){ return !(i & 0x01); });
        return result;
    }
};
