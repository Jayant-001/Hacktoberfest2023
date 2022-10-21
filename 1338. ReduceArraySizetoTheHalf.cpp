#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minSetSize(vector<int>& arr)
    {
        sort(arr.begin(),arr.end());
        vector<int> countF;
        int count=1;
        for(int i=1;i<arr.size();i++)
        {
            if(arr[i]==arr[i-1])
                count++;
            else
            {
                countF.push_back(count);
                count=1;
            }
        }
        countF.push_back(count);
        sort(countF.begin(),countF.end());
        int c=0;
        int size=arr.size();
        int j=countF.size()-1;
        while(size>(arr.size())/2)
        {
            size=size-countF[j];
            c++;
            j--;
        }
        return c;
    }
};