#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int l=nums.size();int p;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<l-1)
        {
          if(nums[i]==nums[i+1])
          {
            p=i;
            break;
          }
          else
            i++;
        }
        return nums[p];
    }
};
