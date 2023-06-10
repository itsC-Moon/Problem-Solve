#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
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
// int main()
// {
//     // Solution s1;
//     int p = 1 << 1;
//     cout << p<< '\n';
//     return 0;
// }

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
    }
};