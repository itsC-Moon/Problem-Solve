/*
371-Sum-of-Two-Integers
Medium

Given two integers a and b, return the sum of the two integers without using the operators + and -.

*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
// also is a valide c code 
class Solution
{
public:
    int getSum(int a, int b)
    {
        int sum;
        size_t And;
        while (b)
        {
            sum = a ^ b;

            And = (size_t)(a & b) << 1;

            a = sum;
            b = And;
        }
        return a;
    }
};