#include"Solution.h"

vector<int> Solution::twoSum1(vector<int>& nums, int target)
{
    vector<int> ResultVec;
    int i = 0, j = 0;
    for (; i<nums.size(); i++) {
        for (j=i+1; j < nums.size(); j++)
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