#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k)
    {
        vector<int> a;
        unordered_map<int,int> map;
        for(auto i:nums)
            map[i]++;
        priority_queue<pair<int,int>> f;
        for(auto i:map)
            f.push({i.second,i.first});
        while(k>0)
        {
            pair<int,int> q=f.top();
            f.pop();
            a.push_back(q.second);
            k--;
        }
        return a;
    }
};