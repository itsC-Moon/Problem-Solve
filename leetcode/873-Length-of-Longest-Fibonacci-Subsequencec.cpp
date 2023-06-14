/*
873-Length-of-Longest-Fibonacci-Subsequencec
Medium

A sequence x1, x2, ..., xn is Fibonacci-like if:

n >= 3
xi + xi+1 == xi+2 for all i + 2 <= n
Given a strictly increasing array arr of positive integers forming a sequence, return the length of the longest Fibonacci-like subsequence of arr. If one does not exist, return 0.

A subsequence is derived from another sequence arr by deleting any number of elements (including none) from arr, without changing the order of the remaining elements. For example, [3, 5, 8] is a subsequence of [3, 4, 5, 6, 7, 8].
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <math.h>
using namespace std;
class Solution
{
public:
    int lenLongestFibSubseq(vector<int> &arr)
    {
        unordered_set<int> set;
        int currentlen, maxlen;
        for (int x : arr)
            set.insert(x);
        for (size_t i = 0; (int)i < arr.size(); i++)
        {
            
        }
    }
};
bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s * s == x);
}
 
// Returns true if n is a Fibonacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibonacci if one of 5*n*n + 4 or 5*n*n - 4 or
    // both is a perfect square
    return isPerfectSquare(5 * n * n + 4)
           || isPerfectSquare(5 * n * n - 4);
}
int main()
{

    return 0;
}