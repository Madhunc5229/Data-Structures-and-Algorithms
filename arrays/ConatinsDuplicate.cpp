#include <stdio.h>
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> count;

        for(int i=0; i<nums.size(); i++){
            if(count.find(nums[i]) == count.end()){
                count.insert(nums[i]);
            }
            else{
                return true;
            }
            
        }
        return false;
    }
};


int main(){

    Solution s;
    vector<int> nums = {1,2,3,1};
    if (s.containsDuplicate(nums)){
        cout<<"Contains Duplicate"<<"\n";
    }
    else{
        cout<<"Does not conatin Duplciate"<<"\n";
    }

}