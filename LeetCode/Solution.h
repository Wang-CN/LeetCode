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

class Solution {
public:
    //1.两数之和
    vector<int> twoSum1(vector<int>& nums, int target);
    vector<int> twoSum2(vector<int>& nums, int target);
    void twoSumTest();

    //2. 两数相加
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    //13. 罗马数字转整数
    int romanToInt(string s);

    //14. 最长公共前缀
    string longestCommonPrefix(vector<string>& strs);
    //21. 合并两个有序链表
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};