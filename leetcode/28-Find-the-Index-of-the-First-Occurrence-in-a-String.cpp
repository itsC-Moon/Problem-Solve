/*
28-Find-the-Index-of-the-First-Occurrence-in-a-String
Easy
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        size_t j = 0;
        if(needle.size() > haystack.size())
            return -1;
        for (size_t i = 0; i < haystack.size(); i++)
        {
            if(haystack[i] == needle[0])
            {
                for (j = 1; j < needle.size(); j++)
                {
                    if(haystack[j+i] == needle[j])
                        continue;
                    else
                        break;
                }
                if(j == needle.size())
                    return i;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s1;
    cout<<s1.strStr("mississippi","issipi")<<'\n';
    
    
    return 0;
}