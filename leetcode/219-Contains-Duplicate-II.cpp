/*
219-Contains-Duplicate-II
Easy
Given an integer array nums and an integer k, return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution
{
public:
    bool containsNearbyDuplicate(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (map.find(nums[i]) != map.end())
            {
                if (abs((int)(i - map[nums[i]])) <= k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};