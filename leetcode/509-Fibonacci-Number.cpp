/*

509-Fibonacci-Number
Easy

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,
*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution
{
public:
    int fib(int n)
    {
        int x = 0, y = 1, z;

        if (n < 2)
            return n;
        for (size_t i = 0; (int)i < n-1; i++)
        {
            z = x + y;
            x = y;
            y = z;
        }
        return z;
    }
};