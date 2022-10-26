#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minMoves(vector<int>& nums)
    {
        int l=nums.size();
        sort(nums.begin(),nums.end());
        int i;int sum=0;
        for(i=0;i<l;i++)
        {
            sum=sum+nums[i];
        }
        int moves=sum-nums[0]*l;
        return moves;
    }
};