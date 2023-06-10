#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

// driver code

using namespace std;
class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> map;
        vector<int> res;
        for (size_t i = 0; i < nums.size(); i++)
        {
            if (map.find(nums[i]) != map.end())
                map[nums[i]] += 1;
            else
                map[nums[i]] = 1;
        }

        for (int i = 0; i < k; i++)
        {
            int max_value = 0;
            int key = 0;
            for (const auto &kv : map)
            {
                if (kv.second > max_value)
                {
                    max_value = kv.second;
                    key = kv.first;
                }
            }
            map.erase(key);
            res.push_back(key);
        }
        return res;
    }
};
// nice solution
// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         vector<int> result;
//         unordered_map<int, int> umap;
//         for(int n: nums){
//             umap[n]++;
//         }
//         priority_queue<pair<int, int>> pq;
//         for(auto &it: umap){
//             pq.push(make_pair(it.second, it.first));
//         }
//         while(k > 0){
//             result.push_back(pq.top().second);
//             pq.pop();
//             k--;
//         }
//         return result;
//     }
// };