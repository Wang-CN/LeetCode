#include"Solution.h"



int Solution::lengthOfLongestSubstring(string s)
{
    TestStringFor3 T;
    int iMaxLen = 0;
    for (int i= 0; i<s.length(); i++)
    {
        for (int j=i; j < s.length() && T.insert(&s[j]); j++)
        {
            if (iMaxLen < T.iSize)
            {
                iMaxLen = T.iSize;
            }
        }

    }
    return iMaxLen;
}
int Solution::lengthOfLongestSubstring2(string s)
{
    return 0;
}

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* p1 = l1, *p2 = l2;
    ListNode* pResult = NULL;
    ListNode* pLast = NULL;
    int iFlag = 0;
    int iValue = 0;

    while (p1 != NULL || p2 != NULL)
    {
        iValue = 0;
        ListNode* pTmp = new ListNode(0);
        if (pResult == NULL)
        {
            pResult = pTmp;
        }
        else
        {
            pLast->next = pTmp;
        }
        if (p1 != NULL && p2 != NULL)
        {
            iValue = p1->val + p2->val + iFlag;

            p1 = p1->next;
            p2 = p2->next;
        }
        else
        {
            ListNode* p3 = p1 ? p1 : p2;
            iValue = p3->val + iFlag;
            p1 == NULL ? p2 = p2->next : p1=p1->next;
        }

        if (iValue >= 10)
        {
            iValue %= 10;
            iFlag = 1;
        }
        else
        {
            iFlag = 0;
        }
        pTmp->val = iValue;
        pLast = pTmp;

    }

    if (iFlag)
    {
        ListNode* pTmp = new ListNode(iFlag);
        pLast->next = pTmp;
    }


    return pResult;
}

vector<int> Solution::twoSum1(vector<int>& nums, int target)
{
    vector<int> ResultVec;
    int i = 0, j = 0;
    for (; i < nums.size(); i++) {
        for (j = i + 1; j < nums.size(); j++)
        {
            if (nums[i] + nums[j] == target)
            {
                ResultVec.push_back(i);
                ResultVec.push_back(j);
            }
        }
    }
    return ResultVec;
}

vector<int> Solution::twoSum2(vector<int>& nums, int target)
{
    vector<int> ResultVec;
    unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums[i]) != m.end()) {
            ResultVec.push_back(m[nums[i]]);
            ResultVec.push_back(i);
            return ResultVec;
        }
        else {
            m[target - nums[i]] = i;
        }
    }

    return ResultVec;
}

void Solution::twoSumTest()
{
    vector<int> SourceVec = { 3,2,4 };
    int target = 6;
    vector<int> ResuleVec;

    cout << "twoSumTest1 Begin " << endl;
    ResuleVec = twoSum1(SourceVec, target);
    vector<int>::iterator it;
    for (it = ResuleVec.begin(); it != ResuleVec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << "twoSumTest1 End " << endl;

    cout << "twoSumTest2 Begin " << endl;
    ResuleVec = twoSum2(SourceVec, target);
    for (it = ResuleVec.begin(); it != ResuleVec.end(); it++) {
        cout << *it << " ";
    }
    cout << endl << "twoSumTest2 End " << endl;


}

int Solution::romanToInt(string s)
{
    int iResult = 0;
    for (int i = 0; i < s.length(); i++)
    {
        switch (s[i])
        {
        case 'M':
            if (s[i - 1] == 'C')
            {
                iResult += 800;
            }
            else
            {
                iResult += 1000;
            }
            break;
        case 'D':
            if (s[i - 1] == 'C')
            {
                iResult += 300;
            }
            else
            {
                iResult += 500;
            }
            break;
        case 'C':
            if (s[i - 1] == 'X')
            {
                iResult += 80;
            }
            else
            {
                iResult += 100;
            }
            break;
        case 'L':
            if (s[i - 1] == 'X')
            {
                iResult += 30;
            }
            else
            {
                iResult += 50;
            }
            break;
        case 'X':
            if (s[i - 1] == 'I')
            {
                iResult += 8;
            }
            else
            {
                iResult += 10;
            }
            break;
        case 'V':
            if (s[i - 1] == 'I')
            {
                iResult += 3;
            }
            else
            {
                iResult += 5;
            }
            break;
        case 'I':
            iResult += 1;
            break;
        default:
            break;
        }
    }
    return iResult;
}

string Solution::longestCommonPrefix(vector<string>& strs)
{
    string sCommonPrefix = "";
    if (strs.size() == 0)
    {
        return sCommonPrefix;
    }
    vector<string>::iterator it;
    it = strs.begin();
    sCommonPrefix = *it;
    for (; it != strs.end(); it++)
    {
        for (int i = 0; i < sCommonPrefix.length(); i++)
        {
            if (sCommonPrefix[i] == (*it)[i])
            {
                continue;
            }
            else
            {
                sCommonPrefix = sCommonPrefix.substr(0, i);
            }
        }
        if (sCommonPrefix.length() == 0)
        {
            break;
        }
    }
    return sCommonPrefix;
}

ListNode* Solution::mergeTwoLists(ListNode* l1, ListNode* l2)
{
    ListNode *ResultList = NULL;
    ListNode *p = ResultList;
    while (l1 != NULL || l2 != NULL)
    {
        if (l1 == NULL && p != NULL)
        {
            p->next = l2;
            break;
        }
        if (l2 == NULL && p != NULL)
        {
            p->next = l1;
            break;
        }
        if (l1->val < l2->val)
        {
            if (p == NULL)
            {
                ResultList = l1;
                p = ResultList;
            }
            else
            {
                p->next = l1;
                p = p->next;
            }
            l1 = l1->next;
            continue;
        }
        else
        {
            if (p == NULL)
            {
                ResultList = l2;
                p = ResultList;
            }
            else
            {
                p->next = l2;
                p = p->next;
            }
            l2 = l2->next;
            continue;
        }
    }
    return ResultList;
}
