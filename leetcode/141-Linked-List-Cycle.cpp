/*
141-Linked-List-Cycle
Easy

Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.
*/
#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 

class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        unordered_set<ListNode *> node;
        while (head != nullptr)
        {
            if(node.find(head) != node.end())
                return true;
            node.insert(head);
            head = head->next;
        }
        return false;
        
    }
};