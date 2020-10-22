// Problem link: https://leetcode.com/problems/hamming-distance/

/*
The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
Given two integers x and y, calculate the Hamming distance.
*/

/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Hamming Distance.
Memory Usage: 6.2 MB, less than 100.00% of C++ online submissions for Hamming Distance.
*/

class Solution {
public:
    int hammingDistance(int x, int y)
    {
        return std::bitset<sizeof(int) * 8>(x ^ y).count();
    }
};
