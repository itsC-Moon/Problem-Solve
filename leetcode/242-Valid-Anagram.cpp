/*
242-Valid-Anagram
esay
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        if(s.length() != t.length())
            return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return t == s;
    }
};
int main()
{
    
    
    
    return 0;
}