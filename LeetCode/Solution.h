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
    //1.����֮��
    vector<int> twoSum1(vector<int>& nums, int target);
    vector<int> twoSum2(vector<int>& nums, int target);
    void twoSumTest();

    //2. �������
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    //13. ��������ת����
    int romanToInt(string s);

    //14. �����ǰ׺
    string longestCommonPrefix(vector<string>& strs);
    //21. �ϲ�������������
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};