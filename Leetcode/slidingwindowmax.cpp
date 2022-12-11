//My solution to this problem - https://leetcode.com/problems/sliding-window-maximum/

#include <vector>
#include <iostream>

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int maximum, i;
        vector<int> maxvec;
        if(k == 1)  maxvec.push_back(nums[0]);
        else if(k == 2) maxvec.push_back(max(nums[0], nums[1]));
        else{
        for(i = 0; i < nums.size() - 2; i++){
            int tempmax; 
            tempmax = max(nums[i], nums[i+1]);
            maximum = max(tempmax, nums[i+2]);
            cout << maximum;
            maxvec.push_back(maximum);
        }
            
        }
    return maxvec;}
};