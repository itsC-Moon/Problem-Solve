/*
34-Find-First-and-Last-Position-of-Element-in-Sorted-Array
Medium
Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int a = 0, b = nums.size() - 1;
        int m;
        int found = 0;
        vector<int> res(2, -1);

        if (nums.size() == 1)
        {
            if (nums[0] == target)
            {
                res[0] = 0;
                res[1] = 0;
                return res;
            }
        }
        while (a <= b)
        {
            m = (a + b) / 2;

            if (nums[m] == target)
            {
                found = 1;
                break;
            }
            else if (nums[m] > target)
                b = m - 1;
            else if (nums[m] < target)
                a = m + 1;
        }
        if (found == 1)
        {
            while (m >= 0 && nums[m] == target)
            {
                m--;
            }
            m++;
            a = m;
            while (m < nums.size() && nums[m] == target)
            {
                m++;
            }
            b = m - 1;
            res[0] = a;
            res[1] = b;
        }
        return res;
    }
};
int main()
{
    Solution s1;
    vector<int> v1 = {2,2};
    vector<int> v = s1.searchRange(v1, 2);
    for (int x : v)
        cout << x << ' ';
    cout << '\n';
}