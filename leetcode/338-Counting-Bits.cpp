/*
338-Counting-Bits
Easy
Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <math.h>
using namespace std;
class Solution
{
public:
    vector<int> countBits(int n)
    {
        unsigned int uCount;
        vector<int> res;
        for (int i = 0; i <= n; i++)
        {
            // why stackoverflow know !!! 
            uCount = i - ((i >> 1) & 033333333333) - ((i >> 2) & 011111111111);
            res.push_back(((uCount + (uCount >> 3)) & 030707070707) % 63);
        }
        return res;
    }
};