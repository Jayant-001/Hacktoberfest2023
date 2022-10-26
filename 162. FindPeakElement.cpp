#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums)
    {
        int index;
        int l=nums.size();
        if(l==1)
            return 0;
        else
        {
        for(int i=1;i<l-1;i++)
        {
            if(nums[i]>nums[i+1] && nums[i]>nums[i-1])
                index=i;
        }
        if(nums[0]>nums[1])
            return 0;
        else if(nums[l-1]>nums[l-2])
            return l-1;
        else
            return index;
        }
    }
};