#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> two_sum;
        int diff=0;
        vector<int> idx;
        for(int i=0; i<nums.size(); i++){
            diff = target - nums[i];
            if(two_sum.find(diff) != two_sum.end()){
                idx.push_back(two_sum[diff]);
                idx.push_back(i);
            }
            else{
                two_sum[nums[i]] = i;
            }
        }
        return idx;
    }
};




int main(){

    Solution sol;
    vector<int> nums={2,7,11,15};
    int target = 9;
    vector<int> output  =sol.twoSum(nums,target); 
    cout<<"idx: "<< output[0] << output[1] <<"\n"; 

}