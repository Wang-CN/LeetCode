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
    //1.����֮��
    vector<int> twoSum1(vector<int>& nums, int target);
    vector<int> twoSum2(vector<int>& nums, int target);
    void twoSumTest();

    //2. �������
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

    //3. ���ظ��ַ�����Ӵ�
    int lengthOfLongestSubstring(string s);
    int lengthOfLongestSubstring2(string s);
    //13. ��������ת����
    int romanToInt(string s);

    //14. �����ǰ׺
    string longestCommonPrefix(vector<string>& strs);
    //21. �ϲ�������������
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);
};