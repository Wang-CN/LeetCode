#pragma once
#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {};
};
class TestStringFor3
{
public:
    char *s[100] = { 0 };
    int iSize = 0;
    bool insert(char *a)
    {
        bool ret = true;
        if (s[int(*a) - 32] != 0)
        {
            ret = false;
            iSize = 0;
            for (int i=0; i<100; i++)
            {
                s[i] = 0;
            }
        }
        else
        {
            s[int(*a) - 32] = a;
            iSize++;
        }
        return ret;
    }
};
class Solution {
public:
    //1.两数之和
    vector<int> twoSum1(vector<int>& nums, int target);
    vector<int> twoSum2(vector<int>& nums, int target);
    void twoSumTest();

    //2. 两数相加
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    //3. 无重复字符的最长子串
    int lengthOfLongestSubstring(string s);
    int lengthOfLongestSubstring2(string s);
    //13. 罗马数字转整数
    int romanToInt(string s);

    //14. 最长公共前缀
    string longestCommonPrefix(vector<string>& strs);
    //21. 合并两个有序链表
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};