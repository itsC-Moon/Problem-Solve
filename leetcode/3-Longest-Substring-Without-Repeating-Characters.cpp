/*3-Longest-Substring-Without-Repeating-Characters
  Medium
  Given a string s, find the length of the longest
  substring
  without repeating characters.
*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int maxcount = 0;
        int st = 0;
        unordered_map<char, int> map;
        for (size_t i = 0; i < s.length(); i++)
        {
            if (map.find(s[i]) != map.end())
            {
                st = map[s[i]] + 1;
                // this is a magic line hhhhhh i know whats it does but its fast why c++ thing
                for (auto it = map.cbegin(); it != map.cend();)
                {
                    if ((it->second <= st - 1))
                    {
                        map.erase(it++);
                    }
                    else
                    {
                        ++it;
                    }
                }
            }
            map[s[i]] = i;
            maxcount = max(maxcount, (int)map.size());
        }
        return max(maxcount, (int)map.size());
    }
};