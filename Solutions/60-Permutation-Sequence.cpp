// Problem link: https://leetcode.com/problems/permutation-sequence/submissions/

/*
The set [1,2,3,...,n] contains a total of n! unique permutations.

By listing and labeling all of the permutations in order, we get the following sequence for n = 3:

"123"
"132"
"213"
"231"
"312"
"321"
Given n and k, return the kth permutation sequence.

Note:

Given n will be between 1 and 9 inclusive.
Given k will be between 1 and n! inclusive.
*/

/*
Runtime: 852 ms, faster than 11.43% of C++ online submissions for Permutation Sequence.
Memory Usage: 6.1 MB, less than 100.00% of C++ online submissions for Permutation Sequence.
*/

class Solution {
public:
    string getPermutation(int n, int k)
    {
        static const auto digits = std::array<char, 9> { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
        auto str = std::string(digits.data(), n);
        
        for (int i = 1; i < k; ++i)
        {
            std::next_permutation(std::begin(str), std::end(str));
        }
        
        return str;
    }
};
