// Problem link: https://leetcode.com/problems/monotonic-array/

/*
An array is monotonic if it is either monotone increasing or monotone decreasing.
An array A is monotone increasing if for all i <= j, A[i] <= A[j].  An array A is monotone decreasing if for all i <= j, A[i] >= A[j].
Return true if and only if the given array A is monotonic.
*/

/*
Runtime: 140 ms, faster than 73.32% of C++ online submissions for Monotonic Array.
Memory Usage: 52.8 MB, less than 5.97% of C++ online submissions for Monotonic Array.
*/

class Solution {
public:
    bool isMonotonic(vector<int>& A)
    {
        return std::is_sorted(A.begin(), A.end()) || std::is_sorted(A.rbegin(), A.rend());
    }
};
