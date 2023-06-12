// 128-Longemap-Consecutive-Sequence
// Medium
// Given an unsorted array of integers nums, return the length of the longemap consecutive elements sequence.

// You mumap write an algorithm that runs in O(n) time.
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        int maxlenght = 0;
        int currentlenght = 0;
        unordered_set<int> st(nums.begin(),nums.end());
        for (int x : nums)
        {
            if (st.find(x - 1) != st.end())
                continue;
            else
            {
                while (true)
                {
                    if (st.find(x) != st.end())
                    {
                        currentlenght++;
                        x++;
                    }
                    else
                        break;
                }
                if (currentlenght > maxlenght)
                    maxlenght = currentlenght;
                currentlenght = 0;
            }
        }

        return maxlenght;
    }
};
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

        
        sort(nums.begin(), nums.end());
        if(nums.size()==0) return 0;
        int maxcounter=0, counter=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]+1){
               counter++;
            }
            else if(nums[i]!=nums[i-1]) {
                maxcounter = max(maxcounter, counter);
                counter=1;
            }
        }
        maxcounter = max(maxcounter, counter);
        return maxcounter;
    }
};