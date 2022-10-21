#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minPartitions(string n)
    {
        char d;
        int max=0;
        for(int i=0;i<n.length();i++)
        {
            d=n.at(i);
            if(max<d-48)
                max=d-48;
        }
        return max;
    }
};