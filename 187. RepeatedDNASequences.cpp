#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        int i;
        int l=s.length();
        unordered_map<string,int> a;
        vector<string> ans;
        for(i=9;i<l;i++)
        {
            string k=s.substr(i-9,10);
            a[k]++;
        }
        for(auto i: a)
        {
            if(i.second>1)
                ans.push_back(i.first);
        }
        return ans;
    }
};