#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findsum(vector<int>& nums,int min,int max)
    {
        if(min==max)
            return nums[min];
        else
            {
                int m = (min+max)/2,lsum,rsum,crosssum;
                lsum = findsum(nums,min,m);
                rsum = findsum(nums,m+1,max);
                crosssum = findcrosssum(nums,min,m,max);
                if(rsum>=lsum && rsum>=crosssum)
                    return rsum;
                else if(lsum>=rsum && lsum>=crosssum)
                    return lsum;
                else
                    return crosssum;
            }
    }
    int findcrosssum(vector<int>& nums,int min,int m,int max)
    {
        int l=nums[m],s=nums[m];
        for(int i=m-1;i>=min;i--)
        {
            s+=nums[i];
            if(s>l)
                l=s;
        }
        int r=nums[m+1];
        s=nums[m+1];
        for(int i=m+2;i<=max;i++)
        {
            s+=nums[i];
            if(s>r)
                r=s;
        }
        return l+r;
    }
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        return findsum(nums,0,n-1);
    }
};