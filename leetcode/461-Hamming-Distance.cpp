/*
461-Hamming-Distance
Easy

The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, return the Hamming distance between them.

*/
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int hammingDistance(int x, int y) 
    {
        int n = x ^ y;
        int count = 0;
        while(n != 0){
            count += (n%2);
            n >>= 1;
        }
        return count;    
    }
};