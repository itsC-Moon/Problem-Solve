/*
217-Contains-Duplicate
Easy
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> st;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (st.find(nums[i]) != st.end())
                return false;
            else
                st.insert(nums[i]);
        }
        return true;
    }
};
int main()
{

    return 0;
}